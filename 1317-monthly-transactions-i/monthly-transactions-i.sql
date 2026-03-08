select DATE_FORMAT(trans_date,'%Y-%m') as month,country,count(id) AS trans_count,
SUM(case
        When state = "approved" Then 1 ELse 0 END) as approved_count,
SUM(amount) as trans_total_amount,
sum(case
        When state = "approved" Then amount Else 0 End) as approved_total_amount
from Transactions t1
GROUP BY YEAR(trans_date),MONTH(trans_date),country;