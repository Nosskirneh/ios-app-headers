//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UIPickerCellTouchInjection : NSObject
{
}

+ (id)superPickerView:(id)arg1;
+ (int)pickerView:(id)arg1 selectedComponentIndexAtPoint:(struct CGPoint)arg2;
+ (int)pickerView:(id)arg1 selectedRowIndexAtPoint:(struct CGPoint)arg2;
+ (id)componentsFor:(id)arg1;
+ (int)pickerView:(id)arg1 modifySelectedRow:(int)arg2 InComponent:(int)arg3;
+ (id)tableViewForCell:(id)arg1;
+ (void)selectTableViewCell:(id)arg1;
+ (void)deselectAllCells:(id)arg1;
+ (void)pickerCell:(id)arg1 handleTouchCancel:(id)arg2;
+ (void)pickerCell:(id)arg1 handleTouchMoveOutside:(id)arg2;
+ (void)pickerCell:(id)arg1 handleTouchUpOutside:(id)arg2;
+ (void)pickerCell:(id)arg1 handleTouchUpInside:(id)arg2;
+ (void)pickerCell:(id)arg1 handleTouchMoveInside:(id)arg2;
+ (void)pickerCell:(id)arg1 handleTouchDownInside:(id)arg2;
+ (_Bool)shouldHandleEventsForSubviews;
+ (_Bool)isActive:(id)arg1;
+ (long long)view:(id)arg1 handleTouchEvent:(id)arg2;

@end

