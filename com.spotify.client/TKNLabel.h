//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class TKNTypeStyle;

@interface TKNLabel : UILabel
{
    _Bool _usingDynamicType;
    TKNTypeStyle *_style;
}

@property(retain, nonatomic) TKNTypeStyle *style; // @synthesize style=_style;
@property(nonatomic, getter=isUsingDynamicType) _Bool usingDynamicType; // @synthesize usingDynamicType=_usingDynamicType;
- (void).cxx_destruct;
- (void)setText:(id)arg1;
- (id)initWithStyle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andStyle:(id)arg2;

@end

