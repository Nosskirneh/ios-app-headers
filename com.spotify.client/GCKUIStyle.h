//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCKUIResources, GCKUIStyleAttributesCastViews;

@interface GCKUIStyle : NSObject
{
    GCKUIResources *_uiResources;
    GCKUIStyleAttributesCastViews *_defaultCastViews;
    GCKUIStyleAttributesCastViews *_castViews;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) GCKUIStyleAttributesCastViews *castViews; // @synthesize castViews=_castViews;
- (void).cxx_destruct;
- (void)initDefaultImageContentModes;
- (void)initDefaultShadowOffsets;
- (void)initDefaultColors;
- (void)initDefaultImages;
- (void)initDefaultFonts;
- (void)initDefaults;
- (void)contentSizeDidChange:(id)arg1;
- (void)dealloc;
- (void)applyStyle;
- (id)initWithAnalyticsEventLogger:(id)arg1 uiResources:(id)arg2;

@end

