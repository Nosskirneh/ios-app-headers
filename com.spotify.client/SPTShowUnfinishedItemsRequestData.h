//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastRequestData-Protocol.h"

@class NSArray, NSData, NSNumber, NSPredicate, NSSortDescriptor, NSString;

@interface SPTShowUnfinishedItemsRequestData : NSObject <SPTPodcastRequestData>
{
    NSString *_requestStringTemplate;
    NSPredicate *_filterPredicate;
    NSSortDescriptor *_sortDescriptor;
    NSNumber *_absTimeLeftTolerance;
    NSNumber *_relTimeLeftTolerance;
    NSArray *_sortDescriptors;
    NSData *_requestBody;
    NSString *_requestActionType;
}

@property(copy, nonatomic) NSString *requestActionType; // @synthesize requestActionType=_requestActionType;
@property(retain, nonatomic) NSData *requestBody; // @synthesize requestBody=_requestBody;
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) NSNumber *relTimeLeftTolerance; // @synthesize relTimeLeftTolerance=_relTimeLeftTolerance;
@property(retain, nonatomic) NSNumber *absTimeLeftTolerance; // @synthesize absTimeLeftTolerance=_absTimeLeftTolerance;
@property(readonly, nonatomic) NSSortDescriptor *sortDescriptor; // @synthesize sortDescriptor=_sortDescriptor;
@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(retain, nonatomic) NSString *requestStringTemplate; // @synthesize requestStringTemplate=_requestStringTemplate;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isGrouped) _Bool grouped;
@property(readonly, copy, nonatomic) NSString *requestAction;
- (void)addAbsoluteTolerance:(id)arg1 relativeTolerance:(id)arg2 toString:(id)arg3;
- (void)addRange:(struct _NSRange)arg1 toString:(id)arg2;
- (id)additionalFilterString:(id)arg1;
- (id)initWithAbsTimeLeftTolerance:(id)arg1 relTimeLeftTolerance:(id)arg2 range:(struct _NSRange)arg3 requestActionType:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

