const inv = [{
        name: 'laptop',
        price: 100,
        count: 5
    },
    {
        name: 'steam deck',
        price: 500,
        count: 1
    },
    {
        name: 'iphone',
        price: 1000,
        count: 500
    },
    {
        name: 'nintendo switch',
        price: 300,
        count: 20000
    }
]


const res = inv.find((item) => {
    return item.name === "steam deck";
})
console.log(res);