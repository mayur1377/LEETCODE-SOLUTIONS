select w1.id 
from Weather w1 , Weather w2
where
(
    w1.temperature >w2.temperature  and datediff(w1.recordDate , w2.recordDate)=1 
)