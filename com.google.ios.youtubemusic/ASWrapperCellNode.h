//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASCellNode.h"

@interface ASWrapperCellNode : ASCellNode
{
    CDUnknownBlockType _sizeForItemBlock;
    CDUnknownBlockType _cellForItemBlock;
    CDUnknownBlockType _viewForSupplementaryBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType viewForSupplementaryBlock; // @synthesize viewForSupplementaryBlock=_viewForSupplementaryBlock;
@property(readonly, nonatomic) CDUnknownBlockType cellForItemBlock; // @synthesize cellForItemBlock=_cellForItemBlock;
@property(readonly, nonatomic) CDUnknownBlockType sizeForItemBlock; // @synthesize sizeForItemBlock=_sizeForItemBlock;
- (void).cxx_destruct;
- (_Bool)shouldUseUIKitCell;

@end

