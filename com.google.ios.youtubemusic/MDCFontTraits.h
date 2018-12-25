//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MDCFontTraits : NSObject
{
    double _pointSize;
    double _weight;
    double _leading;
    double _tracking;
}

+ (id)traitsForTextStyle:(long long)arg1 sizeCategory:(id)arg2;
+ (id)traitsWithPointSize:(double)arg1 weight:(double)arg2 leading:(double)arg3 tracking:(double)arg4;
+ (void)initialize;
@property(readonly, nonatomic) double tracking; // @synthesize tracking=_tracking;
@property(readonly, nonatomic) double leading; // @synthesize leading=_leading;
@property(readonly, nonatomic) double weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) double pointSize; // @synthesize pointSize=_pointSize;
- (id)initWithPointSize:(double)arg1 weight:(double)arg2 leading:(double)arg3 tracking:(double)arg4;

@end
