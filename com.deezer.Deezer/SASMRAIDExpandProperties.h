//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SASMRAIDAbstractProperties.h"

@class UIColor;

@interface SASMRAIDExpandProperties : SASMRAIDAbstractProperties
{
    _Bool _useCustomClose;
    _Bool _modal;
    double _width;
    double _height;
    UIColor *_backgroundColor;
}

@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic, getter=isModal) _Bool modal; // @synthesize modal=_modal;
@property(nonatomic) _Bool useCustomClose; // @synthesize useCustomClose=_useCustomClose;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
- (void).cxx_destruct;
- (id)opacityStringFromColor:(id)arg1;
- (id)stringFromColor:(id)arg1;
- (id)colorFromString:(id)arg1;
- (_Bool)isStringAValidColor:(id)arg1;
- (_Bool)isStringHex:(id)arg1;
- (_Bool)isInvalidDictionary:(id)arg1;
- (void)fillWithDefaultValues;
- (id)dictionaryFromValues;
- (_Bool)fillWithDictionary:(id)arg1;
- (id)init;

@end

