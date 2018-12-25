//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GOOPickerView-Protocol.h"

@class GOODatePickerColorPalette, GOOTimePickerControl, NSCalendar, NSDate, NSString, QTMButton;
@protocol GOOPickerViewDelegate;

@interface GOOTimePickerView : UIView <GOOPickerView>
{
    NSCalendar *_calendar;
    GOOTimePickerControl *_timePickerControl;
    QTMButton *_cancelButton;
    QTMButton *_doneButton;
    id <GOOPickerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <GOOPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)createToggleButtonWithSelector:(SEL)arg1;
- (void)updateForCurrentColorPalette;
- (void)updateSelectedDateIsAM:(_Bool)arg1;
- (void)didTapDone:(id)arg1;
- (void)didTapCancel:(id)arg1;
@property(retain, nonatomic) NSDate *maximumDate;
@property(retain, nonatomic) NSDate *minimumDate;
@property(retain, nonatomic) NSDate *date;
@property(retain, nonatomic) GOODatePickerColorPalette *colorPalette;
@property(nonatomic) long long style;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 calendar:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
