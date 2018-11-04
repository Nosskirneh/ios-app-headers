//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface DZRNativeAd : NSObject
{
    _Bool _shouldBlockAd;
    NSString *_title;
    NSString *_body;
    NSURL *_iconURL;
    NSURL *_imageURL;
    NSString *_callToAction;
    NSString *_sponsoredText;
}

@property(readonly, nonatomic) _Bool shouldBlockAd; // @synthesize shouldBlockAd=_shouldBlockAd;
@property(retain, nonatomic) NSString *sponsoredText; // @synthesize sponsoredText=_sponsoredText;
@property(retain, nonatomic) NSString *callToAction; // @synthesize callToAction=_callToAction;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)unregisterView;
- (void)registerView:(id)arg1 andViewController:(id)arg2;

@end

