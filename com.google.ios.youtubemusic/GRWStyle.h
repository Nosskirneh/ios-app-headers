//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GRWStyle : NSObject
{
}

+ (void)clearStyleOverrideForNextLaunch;
+ (void)setStyleForNextLaunch:(unsigned long long)arg1;
+ (id)styleToolSubtitle;
+ (id)stringForStyle:(unsigned long long)arg1;
+ (id)fontForWeight:(double)arg1 fontSizeDictionary:(id)arg2;
+ (id)fontForMaterialTextStyle:(long long)arg1;
+ (id)typography;
+ (id)layout;
+ (id)color;
+ (void)setDynamicTypeEnabled:(_Bool)arg1;
+ (_Bool)isDynamicTypeEnabled;
+ (_Bool)isCurrentInterfaceStyleGoogleMaterial;
+ (_Bool)isCurrentInterfaceStyleMaterial;
+ (void)setCurrentInterfaceStyle:(unsigned long long)arg1;
+ (unsigned long long)currentInterfaceStyle;
+ (id)appSwitchingDisplay;
+ (id)messagingDisplay;
+ (id)cardDisplay;
+ (id)featureHighlightDisplay;
+ (id)tooltipDisplay;

@end

