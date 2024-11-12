class Solution:
    def reachingPoints(self, sx: int, sy: int, tx: int, ty: int) -> bool:
        while tx >= sx and ty >= sy:
            if tx == ty:
                break
            if tx > ty:
                if ty > sy:
                    tx %= ty
                else:
                    return (tx - sx) % ty == 0 and sy == ty
            else:
                if tx > sx:
                    ty %= tx
                else:
                    return (ty - sy) % tx == 0 and sx == tx
        return (tx, ty) == (sx, sy)
