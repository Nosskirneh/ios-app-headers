//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASCellNode, NSString;
@protocol ASRangeManagingNode;

@interface ASCollectionElement : NSObject
{
    struct mutex _lock;
    ASCellNode *_node;
    NSString *_supplementaryElementKind;
    id <ASRangeManagingNode> _owningNode;
    id _nodeModel;
    CDUnknownBlockType _nodeBlock;
    CDStruct_42a63532 _constrainedSize;
    CDStruct_5cfb9e3d _traitCollection;
}

@property(copy, nonatomic) CDUnknownBlockType nodeBlock; // @synthesize nodeBlock=_nodeBlock;
@property(readonly, nonatomic) id nodeModel; // @synthesize nodeModel=_nodeModel;
@property(nonatomic) CDStruct_5cfb9e3d traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) __weak id <ASRangeManagingNode> owningNode; // @synthesize owningNode=_owningNode;
@property(nonatomic) CDStruct_42a63532 constrainedSize; // @synthesize constrainedSize=_constrainedSize;
@property(readonly, copy, nonatomic) NSString *supplementaryElementKind; // @synthesize supplementaryElementKind=_supplementaryElementKind;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) ASCellNode *nodeIfAllocated;
@property(readonly) ASCellNode *node;
- (id)initWithNodeModel:(id)arg1 nodeBlock:(CDUnknownBlockType)arg2 supplementaryElementKind:(id)arg3 constrainedSize:(CDStruct_42a63532)arg4 owningNode:(id)arg5 traitCollection:(CDStruct_5cfb9e3d)arg6;

@end
