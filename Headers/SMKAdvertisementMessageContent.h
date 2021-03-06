//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SMKMessageCoding.h"

@class NSDictionary, NSString, SMKAdvertisement;

@interface SMKAdvertisementMessageContent : NSObject <SMKMessageCoding>
{
    SMKAdvertisement *_advertisement;
    NSString *_challenge;
}

@property(retain, nonatomic) NSString *challenge; // @synthesize challenge=_challenge;
@property(retain, nonatomic) SMKAdvertisement *advertisement; // @synthesize advertisement=_advertisement;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

