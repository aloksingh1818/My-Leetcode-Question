SELECT customer_number
FROM (
    SELECT customer_number, COUNT(*) AS total_orders
    FROM Orders
    GROUP BY customer_number
) AS customer_order_counts
WHERE total_orders = (
    SELECT MAX(order_count)
    FROM (
        SELECT COUNT(*) AS order_count
        FROM Orders
        GROUP BY customer_number
    ) AS order_counts
);
