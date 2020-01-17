step :: [Int] -> String -> [Int]
step intList symbol | symbol=="+" = [intList!!0 + intList!!1] ++ drop 2 intList
                    | symbol=="-" = [intList!!1 - intList!!0] ++ drop 2 intList
                    | symbol=="*" = [intList!!0 * intList!!1] ++ drop 2 intList
                    | symbol=="/" = [intList!!0 `div` intList!!1] ++ drop 2 intList
                    | otherwise = (read symbol :: Int) : intList

rpn :: [String] -> Int
rpn intList = (foldl step [] intList)!!0

rpnRec :: [String] -> Int
rpnRec intList = (rpnRecHelp [] intList)!!0

rpnRecHelp :: [Int] -> [String] -> [Int]
rpnRecHelp stack intList | intList==[] = stack
                         | otherwise =  rpnRecHelp (step stack (head intList)) (tail intList)

pnStep :: [Int] -> String -> [Int]
pnStep intList symbol | symbol=="+" = [intList!!0 + intList!!1] ++ drop 2 intList
                    | symbol=="-" = [intList!!0 - intList!!1] ++ drop 2 intList
                    | symbol=="*" = [intList!!0 * intList!!1] ++ drop 2 intList
                    | symbol=="/" = [intList!!0 `div` intList!!1] ++ drop 2 intList
                    | otherwise = (read symbol :: Int) : intList

pn :: [String] -> Int
pn intList = (foldl pnStep [] (reverse intList))!!0



