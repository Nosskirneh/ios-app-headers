//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTMButton.h"

@interface GOONavigationBarButton : QTMButton
{
    struct UIEdgeInsets _backgroundEdgeInsets;
    struct UIEdgeInsets _layoutInsets;
}

@property(nonatomic) struct UIEdgeInsets layoutInsets; // @synthesize layoutInsets=_layoutInsets;
@property(nonatomic) struct UIEdgeInsets backgroundEdgeInsets; // @synthesize backgroundEdgeInsets=_backgroundEdgeInsets;
- (id)view;
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
- (double)inkRadius;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

