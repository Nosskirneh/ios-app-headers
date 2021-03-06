//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class MobileApiInlayAppInstall, MobileApiVideoAd;

@interface MobileApiInlayAd : MTLModel <MTLJSONSerializing>
{
    MobileApiVideoAd *_videoInlay;
    MobileApiInlayAppInstall *_appInstallInlay;
}

+ (id)appInstallInlayJSONTransformer;
+ (id)videoInlayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) MobileApiInlayAppInstall *appInstallInlay; // @synthesize appInstallInlay=_appInstallInlay;
@property(retain, nonatomic) MobileApiVideoAd *videoInlay; // @synthesize videoInlay=_videoInlay;
- (void).cxx_destruct;

@end

