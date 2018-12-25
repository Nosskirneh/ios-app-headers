//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class YTMLightsourcePalette;

@interface YTMLightsourcePaletteSet : NSObject <NSCopying>
{
    YTMLightsourcePalette *_darkPalette;
    YTMLightsourcePalette *_mainPalette;
    YTMLightsourcePalette *_lightPalette;
}

+ (CDStruct_9446e134)darkInactiveIconHSVColorWithSeedHSVColor:(CDStruct_9446e134)arg1;
+ (CDStruct_9446e134)darkBodyTextHSVColorWithSeedHSVColor:(CDStruct_9446e134)arg1;
+ (CDStruct_9446e134)darkPrimaryTextHSVColorWithSeedHSVColor:(CDStruct_9446e134)arg1;
+ (CDStruct_9446e134)darkSection4HSVColorWithSection3HSVColor:(CDStruct_9446e134)arg1;
+ (CDStruct_9446e134)darkSection1HSVColorWithSection3HSVColor:(CDStruct_9446e134)arg1;
+ (CDStruct_9446e134)darkSection2HSVColorWithSection3HSVColor:(CDStruct_9446e134)arg1;
+ (CDStruct_9446e134)darkSection3HSVColorWithSeedHSVColor:(CDStruct_9446e134)arg1;
+ (id)darkPaletteWithSeedHSVColor:(CDStruct_9446e134)arg1;
+ (CDStruct_9446e134)lightInactiveIconHSVColorWithSeedHSVColor:(CDStruct_9446e134)arg1;
+ (CDStruct_9446e134)lightActiveIconHSVColorWithSeedHSVColor:(CDStruct_9446e134)arg1;
+ (CDStruct_9446e134)lightBodyTextHSVColorWithSeedHSVColor:(CDStruct_9446e134)arg1;
+ (CDStruct_9446e134)lightPrimaryTextHSVColorWithSeedHSVColor:(CDStruct_9446e134)arg1;
+ (CDStruct_9446e134)lightSection1HSVColorWithSection2HSVColor:(CDStruct_9446e134)arg1;
+ (CDStruct_9446e134)lightSection4HSVColorWithSection2HSVColor:(CDStruct_9446e134)arg1;
+ (CDStruct_9446e134)lightSection3HSVColorWithSection2HSVColor:(CDStruct_9446e134)arg1;
+ (CDStruct_9446e134)lightSection2HSVColorWithSeedHSVColor:(CDStruct_9446e134)arg1;
+ (id)lightPaletteWithSeedHSVColor:(CDStruct_9446e134)arg1;
+ (CDStruct_9446e134)mainInactiveIconHSVColorWithSeedHSVColor:(CDStruct_9446e134)arg1;
+ (CDStruct_9446e134)mainBodyTextHSVColorWithSeedHSVColor:(CDStruct_9446e134)arg1;
+ (CDStruct_9446e134)mainPrimaryTextHSVColorWithSeedHSVColor:(CDStruct_9446e134)arg1;
+ (CDStruct_9446e134)mainSection4HSVColorWithSection3HSVColor:(CDStruct_9446e134)arg1;
+ (CDStruct_9446e134)mainSection1HSVColorWithSection3HSVColor:(CDStruct_9446e134)arg1;
+ (CDStruct_9446e134)mainSection2HSVColorWithSection3HSVColor:(CDStruct_9446e134)arg1;
+ (CDStruct_9446e134)mainSection3HSVColorWithSeedHSVColor:(CDStruct_9446e134)arg1;
+ (id)mainPaletteWithSeedHSVColor:(CDStruct_9446e134)arg1;
+ (id)defaultPaletteSet;
+ (id)paletteSetWithSeedColor:(id)arg1;
@property(readonly, nonatomic) YTMLightsourcePalette *lightPalette; // @synthesize lightPalette=_lightPalette;
@property(readonly, nonatomic) YTMLightsourcePalette *mainPalette; // @synthesize mainPalette=_mainPalette;
@property(readonly, nonatomic) YTMLightsourcePalette *darkPalette; // @synthesize darkPalette=_darkPalette;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToLightsourcePaletteSet:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDarkPalette:(id)arg1 mainPalette:(id)arg2 lightPalette:(id)arg3;

@end
