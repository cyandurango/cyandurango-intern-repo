# JEST UNIT TESTING TEST RESULTS

```bash
sighreelss@sighreelsss-MacBook-Air my-react-project % npm run test -- stringUtils

> my-react-project@0.0.0 test
> jest stringUtils

 PASS  utils/stringUtils.test.js
  getInitials utility function
    ✓ returns all initials of a standard full name (2 ms)
    ✓ extracts every initial from a multi-word name
    ✓ handles a single name
    ✓ ignores extra spaces
    ✓ returns an empty string if given undefined or null
    ✓ returns an empty string if given a literal number instead of a string (1 ms)
    ✓ completely ignores numbers inside a string

Test Suites: 1 passed, 1 total
Tests:       7 passed, 7 total
Snapshots:   0 total
Time:        0.883 s, estimated 1 s
Ran all test suites matching stringUtils.
```
