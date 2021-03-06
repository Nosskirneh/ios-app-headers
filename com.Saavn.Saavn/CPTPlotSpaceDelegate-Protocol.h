//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CPTPlotRange, CPTPlotSpace;

@protocol CPTPlotSpaceDelegate <NSObject>

@optional
- (_Bool)plotSpace:(CPTPlotSpace *)arg1 shouldHandlePointingDeviceUpEvent:(struct UIEvent *)arg2 atPoint:(struct CGPoint)arg3;
- (_Bool)plotSpace:(CPTPlotSpace *)arg1 shouldHandlePointingDeviceCancelledEvent:(struct UIEvent *)arg2;
- (_Bool)plotSpace:(CPTPlotSpace *)arg1 shouldHandlePointingDeviceDraggedEvent:(struct UIEvent *)arg2 atPoint:(struct CGPoint)arg3;
- (_Bool)plotSpace:(CPTPlotSpace *)arg1 shouldHandlePointingDeviceDownEvent:(struct UIEvent *)arg2 atPoint:(struct CGPoint)arg3;
- (void)plotSpace:(CPTPlotSpace *)arg1 didChangePlotRangeForCoordinate:(long long)arg2;
- (CPTPlotRange *)plotSpace:(CPTPlotSpace *)arg1 willChangePlotRangeTo:(CPTPlotRange *)arg2 forCoordinate:(long long)arg3;
- (struct CGPoint)plotSpace:(CPTPlotSpace *)arg1 willDisplaceBy:(struct CGPoint)arg2;
- (_Bool)plotSpace:(CPTPlotSpace *)arg1 shouldScaleBy:(double)arg2 aboutPoint:(struct CGPoint)arg3;
@end

