//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRCancelable-Protocol.h"

@class NSMutableArray, NSString;

@interface DZRDataProviderCancelable : NSObject <DZRCancelable>
{
    NSMutableArray *_cancelables;
    int _cancelablesLock;
}

+ (id)cancelableWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canceled;
- (void)cancel;
- (void)remove:(id)arg1;
- (void)add:(id)arg1;
- (id)init;
- (void)unwrap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

