//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "PDLGroupPhoto-Protocol.h"

@class NSString;

@interface PDLGroupPhoto : GPBMessage <PDLGroupPhoto>
{
}

+ (id)descriptor;
- (id)initWithSGWPPTargetGroupPhoto:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

