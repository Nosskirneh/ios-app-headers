//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GOODatePickerColorPalette, NSString;

@interface GOODatePickerSelectedDayView : UIView
{
    GOODatePickerColorPalette *_colorPalette;
    NSString *_dayString;
}

@property(retain, nonatomic) NSString *dayString; // @synthesize dayString=_dayString;
@property(retain, nonatomic) GOODatePickerColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
