//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTElementNodeType-Protocol.h"

@class NSString;

@interface YTIContainerType : GPBMessage <YTElementNodeType>
{
}

+ (id)descriptor;
- (Class)nodeClass;
- (id)buildWithElement:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasShouldMaterializeView; // @dynamic hasShouldMaterializeView;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool shouldMaterializeView; // @dynamic shouldMaterializeView;
@property(readonly) Class superclass;

@end

