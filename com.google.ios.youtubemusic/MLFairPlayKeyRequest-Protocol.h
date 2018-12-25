//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol MLFairPlayKeyRequest <NSObject>
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, nonatomic) int cryptoPeriodIndex;
@property(readonly, nonatomic) NSData *encryptedKeyID;
@property(readonly, nonatomic) NSString *requestIdentificationURI;
- (void)createURLRequestWithCompletionBlock:(void (^)(NSURLRequest *, NSError *))arg1;
@end

