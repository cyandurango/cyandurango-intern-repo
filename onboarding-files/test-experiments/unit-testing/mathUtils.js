export const calculateTotal = (price, taxRate) => {
  if (price < 0 || taxRate < 0) return 0;
  return price + price * taxRate;
};
