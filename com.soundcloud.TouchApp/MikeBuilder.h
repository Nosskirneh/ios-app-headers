//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface MikeBuilder : NSObject
{
    UIColor *_builderColor;
    UIColor *_builderPlaceholderColor;
    UIColor *_builderBackgroundColor;
    UIColor *_builderShadowColor;
    UIColor *_builderAccentColor;
    UIFont *_builderFont;
    UIFont *_builderPlaceholderFont;
    double _builderLineSpacing;
    long long _builderTextAlignment;
    struct CGSize _builderShadowOffset;
    struct UIEdgeInsets _builderContentInset;
}

+ (CDUnknownBlockType)builder;
+ (CDUnknownBlockType)copyHighlighted;
+ (CDUnknownBlockType)mediumCopyHighlighted;
+ (CDUnknownBlockType)smallCopyHighlighted;
+ (CDUnknownBlockType)smallCopy;
@property(nonatomic) struct UIEdgeInsets builderContentInset; // @synthesize builderContentInset=_builderContentInset;
@property(nonatomic) long long builderTextAlignment; // @synthesize builderTextAlignment=_builderTextAlignment;
@property(nonatomic) double builderLineSpacing; // @synthesize builderLineSpacing=_builderLineSpacing;
@property(retain, nonatomic) UIFont *builderPlaceholderFont; // @synthesize builderPlaceholderFont=_builderPlaceholderFont;
@property(retain, nonatomic) UIFont *builderFont; // @synthesize builderFont=_builderFont;
@property(retain, nonatomic) UIColor *builderAccentColor; // @synthesize builderAccentColor=_builderAccentColor;
@property(nonatomic) struct CGSize builderShadowOffset; // @synthesize builderShadowOffset=_builderShadowOffset;
@property(retain, nonatomic) UIColor *builderShadowColor; // @synthesize builderShadowColor=_builderShadowColor;
@property(retain, nonatomic) UIColor *builderBackgroundColor; // @synthesize builderBackgroundColor=_builderBackgroundColor;
@property(retain, nonatomic) UIColor *builderPlaceholderColor; // @synthesize builderPlaceholderColor=_builderPlaceholderColor;
@property(retain, nonatomic) UIColor *builderColor; // @synthesize builderColor=_builderColor;
- (void).cxx_destruct;
- (CDUnknownBlockType)build;
- (CDUnknownBlockType)backgroundColor;
- (CDUnknownBlockType)contentInset;
- (CDUnknownBlockType)textAlignment;
- (CDUnknownBlockType)lineSpacing;
- (CDUnknownBlockType)placeholderFont;
- (CDUnknownBlockType)font;
- (CDUnknownBlockType)accentColor;
- (CDUnknownBlockType)shadowOffset;
- (CDUnknownBlockType)shadowColor;
- (CDUnknownBlockType)placeholderColor;
- (CDUnknownBlockType)color;

@end

