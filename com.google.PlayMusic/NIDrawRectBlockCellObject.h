//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NICellObject.h"

@interface NIDrawRectBlockCellObject : NICellObject
{
    CDUnknownBlockType _block;
    id _object;
}

+ (id)objectWithBlock:(CDUnknownBlockType)arg1 object:(id)arg2;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (id)initWithBlock:(CDUnknownBlockType)arg1 object:(id)arg2;

@end

