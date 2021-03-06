//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastRequestData-Protocol.h"

@class NSArray, NSData, NSPredicate, NSString;

@interface SPTPodcastEntityRequestData : NSObject <SPTPodcastRequestData>
{
    NSString *_requestStringTemplate;
    NSPredicate *_filterPredicate;
    NSArray *_sortDescriptors;
    NSData *_requestBody;
    NSString *_action;
}

@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSData *requestBody; // @synthesize requestBody=_requestBody;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(retain, nonatomic) NSString *requestStringTemplate; // @synthesize requestStringTemplate=_requestStringTemplate;
- (void).cxx_destruct;
- (void)addRange:(struct _NSRange)arg1 toString:(id)arg2;
- (id)additionalFilterString:(id)arg1;
- (void)setupFilterPredicate:(id)arg1;
@property(readonly, copy, nonatomic) NSString *requestAction;
- (id)initWithURL:(id)arg1 filterPredicate:(id)arg2 sortDescriptor:(id)arg3 range:(struct _NSRange)arg4 subscribe:(_Bool)arg5 testManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isGrouped) _Bool grouped;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

