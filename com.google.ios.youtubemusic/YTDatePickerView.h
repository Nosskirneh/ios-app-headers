//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GOOModalPresentation-Protocol.h"
#import "UIPickerViewAccessibilityDelegate-Protocol.h"
#import "UIPickerViewDataSource-Protocol.h"

@class NSDateFormatter, NSString, UIButton, UIPickerView;

@interface YTDatePickerView : UIView <UIPickerViewDataSource, UIPickerViewAccessibilityDelegate, GOOModalPresentation>
{
    NSDateFormatter *_dateFormatter;
    _Bool _showYear;
    UIView *_contentView;
    long long _selectedRows[3];
    UIButton *_cancelButton;
    UIButton *_doneButton;
    UIPickerView *_pickerView;
    long long _yearIndex;
    long long _monthIndex;
    long long _dayIndex;
}

@property(nonatomic) long long dayIndex; // @synthesize dayIndex=_dayIndex;
@property(nonatomic) long long monthIndex; // @synthesize monthIndex=_monthIndex;
@property(nonatomic) long long yearIndex; // @synthesize yearIndex=_yearIndex;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(readonly, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void).cxx_destruct;
- (unsigned long long)currentYear;
- (unsigned long long)numberOfDaysInMonth:(unsigned long long)arg1;
- (long long)textAlignmentForComponent:(long long)arg1;
- (double)widthForComponent:(long long)arg1;
- (id)monthNameAtIndex:(unsigned long long)arg1;
- (id)titleForRow:(long long)arg1 inComponent:(long long)arg2;
- (void)calculateDateOrdering;
- (double)hideAnimationDuration;
- (double)showAnimationDuration;
- (_Bool)shouldDimBackground;
- (void)revealDialog;
- (void)dismissDialog:(_Bool)arg1;
- (void)reposition;
- (void)dismissWithCancelAction:(_Bool)arg1;
- (void)dismiss;
- (void)show;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)pickerView:(id)arg1 accessibilityLabelForComponent:(long long)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
@property(nonatomic) unsigned long long day;
@property(nonatomic) unsigned long long month;
@property(nonatomic) unsigned long long year;
- (void)layoutSubviews;
- (id)initWithDateComponents:(id)arg1 showYear:(_Bool)arg2;

// Remaining properties
@property(nonatomic) double backgroundDimAlpha;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=shouldPostScreenChangeNotificationOnDismiss) _Bool postScreenChangeNotificationOnDismiss;
@property(readonly) Class superclass;
@property(nonatomic) __weak UIView *viewToReceiveVoiceOverFocusAfterDismissal;

@end

