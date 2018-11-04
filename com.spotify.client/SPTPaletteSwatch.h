//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UIColor;

@interface SPTPaletteSwatch : NSObject <NSCopying>
{
    _Bool _textColorsGenerated;
    union SPTColor _titleTextColor;
    union SPTColor _bodyTextColor;
    union SPTColor _color;
    unsigned long long _population;
}

@property(nonatomic) _Bool textColorsGenerated; // @synthesize textColorsGenerated=_textColorsGenerated;
@property(readonly, nonatomic) unsigned long long population; // @synthesize population=_population;
@property(readonly, nonatomic) union SPTColor color; // @synthesize color=_color;
- (void)ensureTextColorsAreGenerated;
- (unsigned long long)hash;
- (_Bool)isEqualToSwatch:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) union SPTColor bodyTextColor; // @synthesize bodyTextColor=_bodyTextColor;
@property(readonly, nonatomic) union SPTColor titleTextColor; // @synthesize titleTextColor=_titleTextColor;
- (id)initWithColor:(union SPTColor)arg1 population:(unsigned long long)arg2;
@property(readonly, nonatomic) UIColor *bodyTextUIColor;
@property(readonly, nonatomic) UIColor *titleTextUIColor;
@property(readonly, copy, nonatomic) UIColor *uicolor;

@end

