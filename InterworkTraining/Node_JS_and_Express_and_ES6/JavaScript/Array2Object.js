var obj = {

    // "rejectionLevel": "Quality Control",
    // "rejectedBy": "Mukesh",
    // "rejectionDate": "1650088420110",
    // "rejectedComponentsQty": "3",
    "rejectedComponents": [
        {
            "componentName": "Car Doors",
            "skuCode": "THETA10202",
            "specifications": [
                {
                    "specsType": "Length",
                    "specsValue": "81",
                    "specsUnit": "cm"
                },
                {
                    "specsType": "Height",
                    "specsValue": "90",
                    "specsUnit": "cm"
                },
                {
                    "specsType": "Weight",
                    "specsValue": "100",
                    "specsUnit": "kg"
                }
            ],
            "vendorPartName": "Johnsons Suspensions Part 1",
            "vendorPartCode": "BS-1001",
            "vendorLocation": "Gautam Budh Nagar Revised",
            "vendorName": "Vendor Business 4",
            "componentID": "96F137EBE0",
            "vendorContact": "+91-9977441177",
            "category": "Fabricated Metal Products",
            "subCategory": "Sheets",
            "componentQty": "2",
            "partSno": [
                "HL2365152092",
                "HL2365152091"
            ],
            "rejectionReason": "Damaged Doors",
            "reVerificationStatus": "Specifications not matched",
            "status": "Added to Returns"
        },
        {
            "componentName": "Tyre Assembly",
            "skuCode": "AUTO30001",
            "specifications": [
                {
                    "specsType": "Height",
                    "specsValue": "18",
                    "specsUnit": "inches"
                },
                {
                    "specsType": "Weight",
                    "specsValue": "15",
                    "specsUnit": "kg"
                },
                {
                    "specsType": "Radius",
                    "specsValue": "9",
                    "specsUnit": "inches"
                }
            ],
            "vendorPartName": "Johnsons Suspensions Part 1",
            "vendorPartCode": "BS-1001",
            "vendorLocation": "Gautam Budh Nagar Revised",
            "vendorName": "Vendor Business 4",
            "componentID": "96F137EBE0",
            "vendorContact": "+91-9977441177",
            "category": "Auto & Auto Ancillary",
            "subCategory": "Auto Parts",
            "partSno": "HL2365152003",
            "rejectionReason": "Tyre Grip not present",
            "reVerificationStatus": "Damaged Part",
            "status": "Added to Dead/Scrap"
        },
        {
            "componentName": "Die",
            "skuCode": "LATHE40001",
            "specifications": [
                {
                    "specsType": "Length",
                    "specsValue": "40",
                    "specsUnit": "cm"
                },
                {
                    "specsType": "Height",
                    "specsValue": "10",
                    "specsUnit": "cm"
                },
                {
                    "specsType": "Weight",
                    "specsValue": "500",
                    "specsUnit": "grams"
                }
            ],
            "vendorPartName": "Johnsons Suspensions Part 1",
            "vendorPartCode": "BS-1001",
            "vendorContact": "+91-9977441177",
            "vendorLocation": "Gautam Budh Nagar Revised",
            "vendorName": "Vendor Business 4",
            "componentID": "96F137EBE0",
            "category": "Machinery",
            "subCategory": "Lathe Machine",
            "partSno": "HL2365152004",
            "rejectionReason": "Engine not working properly",
            "reVerificationStatus": "No Issues",
            "status": "Added to MRO Inventory"
        }
    ],
    // "rejectionID": "1650092484699",
    // "tenantID": "dc870fcd-cc51-4632-8d90-98c524c6117a"
}
// (Note that because `price` and such are given as strings in your object,
// the below relies on the fact that <= and >= with a string and number
// will coerce the string to a number before comparing.)
var newArray = obj.rejectedComponents.filter(function (el) {
    return el.skuCode=="AUTO30001" // Changed this so a home would match
});
console.log(newArray);