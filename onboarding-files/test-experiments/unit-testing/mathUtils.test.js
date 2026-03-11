import { calculateTotal } from './mathUtils.js';

describe('calculateTotal', () => {
  // 1. Happy Path: Normal calculation
  test('should calculate the correct total with tax', () => {
    const result = calculateTotal(100, 0.15); // 100 + 15
    expect(result).toBe(115);
  });

  // 2. Edge Case: Zero tax
  test('should return the original price if tax is 0', () => {
    const result = calculateTotal(50, 0);
    expect(result).toBe(50);
  });

  // 3. Negative Input: Handling invalid numbers
  test('should return 0 if price or tax is negative', () => {
    const result = calculateTotal(-10, 0.1);
    expect(result).toBe(0);
  });

  // 4. Floating Point: Testing precision
  test('should handle decimal values accurately', () => {
    const result = calculateTotal(10.5, 0.1);
    expect(result).toBeCloseTo(11.55);
  });
});
