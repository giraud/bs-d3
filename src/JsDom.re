[@bs.module "jsdom"] [@bs.new] external make : string => 'a = "JSDOM";

module D3 = {
  let attach = (dom) => D3.Selection.selecto(dom##window##document##body);
};