//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAShapeLayer, UILabel, _TtC7Napster13AppboyService, _TtC7Napster20NotificationsService;

@interface RHInboxBadgeView : UIControl
{
    _TtC7Napster13AppboyService *_appboyService;
    _TtC7Napster20NotificationsService *_notificationsService;
    UILabel *_unreadCountLabel;
    CAShapeLayer *_circleLayer;
    unsigned long long _style;
}

@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) __weak CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(nonatomic) __weak UILabel *unreadCountLabel; // @synthesize unreadCountLabel=_unreadCountLabel;
@property(retain, nonatomic) _TtC7Napster20NotificationsService *notificationsService; // @synthesize notificationsService=_notificationsService;
@property(retain, nonatomic) _TtC7Napster13AppboyService *appboyService; // @synthesize appboyService=_appboyService;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)configureCircle;
- (void)layoutSubviews;
- (void)updateCount;
- (void)configureKVO;
- (void)loadSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2 dependencies:(id)arg3;
- (id)initWithStyle:(unsigned long long)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)initWithStyle:(unsigned long long)arg1;

@end

