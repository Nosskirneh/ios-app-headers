//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSBaseResponseObject.h"

@class NSString;

@interface SSUiccInfo : SSBaseResponseObject
{
    NSString *_iccId;
    NSString *_imsi;
}

+ (id)infoWithJSON:(id)arg1;
@property(retain, nonatomic) NSString *imsi; // @synthesize imsi=_imsi;
@property(retain, nonatomic) NSString *iccId; // @synthesize iccId=_iccId;
- (void).cxx_destruct;
- (id)initInternal;
- (id)description;

@end

