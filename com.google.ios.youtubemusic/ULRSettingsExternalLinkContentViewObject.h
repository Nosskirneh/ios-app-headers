//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOTextContentViewObject.h"

@class NSURL;

@interface ULRSettingsExternalLinkContentViewObject : GOOTextContentViewObject
{
    NSURL *_externalURL;
}

+ (id)parentRestrictedLearnMoreObject;
+ (id)locationHistoryLearnMoreObject;
@property(readonly, nonatomic) NSURL *externalURL; // @synthesize externalURL=_externalURL;
- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)initWithTitle:(id)arg1 externalURL:(id)arg2;

@end

