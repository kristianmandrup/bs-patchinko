# bs-patchinko

Bucklescript bindings for [patchinko](https://github.com/barneycarroll/patchinko) state patching API.

## Use

### Install

`npm i bs-patchinko`

Add `bs-patchinko` to `dependencies` in `bsconfig.json`

### Usage

See the [meiosis with patchinko](https://meiosis.js.org/tutorial/05-meiosis-with-patchinko.html) tutorial

```javascript
module P = Patchinko;
type person = {
  name: string
};
let kris = {
  name: "Kris"
};
let patched = P.p(a);
```

## Build

```
npm run build
```

## Watch

```
npm run watch
```

## Editor

If you use `vscode`, Press `Windows + Shift + B` it will build automatically
