//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMJSONModel.h"

@class NSDictionary, NSString;

@interface IMAdsModel : IMJSONModel
{
    int _expiry;
    NSDictionary *_pubContent;
    NSString *_markupType;
}

@property(nonatomic) int expiry; // @synthesize expiry=_expiry;
@property(retain, nonatomic) NSString *markupType; // @synthesize markupType=_markupType;
@property(retain, nonatomic) NSDictionary *pubContent; // @synthesize pubContent=_pubContent;
- (void).cxx_destruct;

@end

