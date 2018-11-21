//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, NSURL, SPTUpsellActionData;

@interface SPTUpsellButton : NSObject <NSCopying>
{
    NSString *_localizedTitle;
    SPTUpsellActionData *_actionData;
    NSURL *_trackingURL;
}

@property(readonly, nonatomic) NSURL *trackingURL; // @synthesize trackingURL=_trackingURL;
@property(readonly, nonatomic) SPTUpsellActionData *actionData; // @synthesize actionData=_actionData;
@property(readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqualToButton:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLocalizedTitle:(id)arg1 trackingURL:(id)arg2 actionData:(id)arg3;

@end

