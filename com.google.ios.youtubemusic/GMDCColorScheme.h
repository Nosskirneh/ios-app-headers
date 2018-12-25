//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMDCColorScheming-Protocol.h"
#import "NSCopying-Protocol.h"

@class GMDCMaterialColorScheme, UIColor;
@protocol MDCColorScheming;

@interface GMDCColorScheme : NSObject <GMDCColorScheming, NSCopying>
{
    GMDCMaterialColorScheme *_MDCColorScheme;
    UIColor *_onSurfaceColorVariant;
    UIColor *_secondaryColorVariant;
    UIColor *_onErrorColor;
    UIColor *_hairlineColor;
}

@property(copy, nonatomic) UIColor *hairlineColor; // @synthesize hairlineColor=_hairlineColor;
@property(copy, nonatomic) UIColor *onErrorColor; // @synthesize onErrorColor=_onErrorColor;
@property(copy, nonatomic) UIColor *secondaryColorVariant; // @synthesize secondaryColorVariant=_secondaryColorVariant;
@property(copy, nonatomic) UIColor *onSurfaceColorVariant; // @synthesize onSurfaceColorVariant=_onSurfaceColorVariant;
- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *onBackgroundColor;
@property(copy, nonatomic) UIColor *onSurfaceColor;
@property(copy, nonatomic) UIColor *onSecondaryColor;
@property(copy, nonatomic) UIColor *onPrimaryColor;
@property(copy, nonatomic) UIColor *errorColor;
@property(copy, nonatomic) UIColor *backgroundColor;
@property(copy, nonatomic) UIColor *surfaceColor;
@property(copy, nonatomic) UIColor *secondaryColor;
@property(copy, nonatomic) UIColor *primaryColorVariant;
@property(copy, nonatomic) UIColor *primaryColor;
@property(readonly, nonatomic) id <MDCColorScheming> MDCColorScheme;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToColorScheme:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColorSchemeDefaults:(long long)arg1;
- (id)init;

@end
