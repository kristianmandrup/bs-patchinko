open Jest;
open ExpectJs;

type person = {name: string};
let john = {name: "John"};

describe("Patchinko", () => {
  test("#p", () =>
    expect(() =>
      Patchinko.p(john)
    ) |> not |> toThrow
  );

  test("#s", () =>
    expect(() =>
      Patchinko.s(john)
    ) |> not |> toThrow
  );

  test("#ps", () =>
    expect(() =>
      Patchinko.ps(john)
    ) |> not |> toThrow
  );

  test("#del", () =>
    expect(() =>
      Patchinko.del(john)
    ) |> not |> toThrow
  );

  test("#ov", () =>
    expect(() =>
      Patchinko.ov(john)
    ) |> not |> toThrow
  );

  test("#im", () =>
    expect(() =>
      Patchinko.im(john)
    ) |> not |> toThrow
  );
});