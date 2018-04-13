open Jest;
module S = D3.Selection;

describe("D3", () => {
  open Expect;

  test("should be attached to the JsDom body", () => {
    let d3 = JsDom.make("<!DOCTYPE html><p>Hello!!</p>") |. JsDom.body |. D3.selectNode;
    expect(d3 |> S.select("p") |> S.text) |> toBe("Hello!!")
    })
});
