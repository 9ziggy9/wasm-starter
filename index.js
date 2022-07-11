async function start() {
  console.log("Started!");
  const wasm = await WebAssembly
	.instantiateStreaming(fetch('./wasm/hello.wasm'));
  // Here are our wasm functions!
  console.log(wasm.instance.exports);
  const {hello} = wasm.instance.exports;
  const response = hello(34,35);
  console.log(response);
}

start().catch(e => console.error(e));
