//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary;

@interface VOXPEQDotView : UIView
{
    NSDictionary *_stringAttributes;
    _Bool _selected;
    unsigned long long _index;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)shelvingPathForRect:(struct CGRect)arg1;
- (id)hipassPathForRect:(struct CGRect)arg1;
- (id)peakPathForRect:(struct CGRect)arg1;
- (void)strokeCurvePath:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
