SELECT query_name,
ROUND((AVG(rating/position)),2) AS quality,
ROUND(((SELECT COUNT(rating) from Queries q2 where rating <3 AND q1.query_name = q2.query_name)/(SELECT COUNT(rating) from Queries q2 where q1.query_name = q2.query_name))*100,2) AS poor_query_percentage
FROM Queries q1
group by query_name;