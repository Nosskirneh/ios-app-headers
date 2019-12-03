//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSNumber, NSString;

@interface RHEqualizerPreset : NSObject <NSCoding>
{
    NSNumber *_number;
    NSString *_name;
    NSString *_localizedName;
}

@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *number; // @synthesize number=_number;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end
