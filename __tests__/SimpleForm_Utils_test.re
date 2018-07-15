open Jest;
open Expect;
module U = SimpleForm_Utils;

describe("Utils", () =>
  test("add func", () =>
    expect(U.inspect(5)) |> toBe(5)
  )
);