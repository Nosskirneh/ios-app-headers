//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class NSString, UIColor;

@interface SPTSnackbarIconActionButtonStyle : NSObject <GLUEStyle>
{
    UIColor *_iconNormalBackgroundColor;
    UIColor *_iconHighlightedBackgroundColor;
    UIColor *_iconDisabledBackgroundColor;
    UIColor *_iconNormalColor;
    UIColor *_iconHighlightedColor;
    UIColor *_iconDisabledColor;
    struct CGSize _defaultIconSize;
}

@property(copy, nonatomic) UIColor *iconDisabledColor; // @synthesize iconDisabledColor=_iconDisabledColor;
@property(copy, nonatomic) UIColor *iconHighlightedColor; // @synthesize iconHighlightedColor=_iconHighlightedColor;
@property(copy, nonatomic) UIColor *iconNormalColor; // @synthesize iconNormalColor=_iconNormalColor;
@property(copy, nonatomic) UIColor *iconDisabledBackgroundColor; // @synthesize iconDisabledBackgroundColor=_iconDisabledBackgroundColor;
@property(copy, nonatomic) UIColor *iconHighlightedBackgroundColor; // @synthesize iconHighlightedBackgroundColor=_iconHighlightedBackgroundColor;
@property(copy, nonatomic) UIColor *iconNormalBackgroundColor; // @synthesize iconNormalBackgroundColor=_iconNormalBackgroundColor;
@property(nonatomic) struct CGSize defaultIconSize; // @synthesize defaultIconSize=_defaultIconSize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

