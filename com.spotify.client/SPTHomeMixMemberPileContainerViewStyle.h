//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GLUEDebuggableStyle-Protocol.h"

@class NSString;

@interface SPTHomeMixMemberPileContainerViewStyle : NSObject <GLUEDebuggableStyle>
{
    NSString *_debugName;
    double _overlapLength;
    struct CGSize _entitySize;
}

@property(nonatomic) double overlapLength; // @synthesize overlapLength=_overlapLength;
@property(nonatomic) struct CGSize entitySize; // @synthesize entitySize=_entitySize;
@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

