//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MLMediaAccessibility : NSObject
{
}

+ (long long)MLCaptionPenTextEdgeStyleFromMACaptionAppearanceTextEdgeStyle:(long long)arg1;
+ (long long)MACaptionAppearanceFontStyleFromMLCaptionPenFont:(long long)arg1;
+ (_Bool)captionDisplaySettingsAreDefault;
+ (id)captionDisplaySettings;
+ (id)captionAppearanceSettingsChangedNotification;
+ (id)captionFontWithPenFont:(long long)arg1 size:(double)arg2;

@end

