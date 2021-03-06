//
//  RadTableViewController.h
//  #renio
//
//  Created by Tim Burks on 11/8/13.
//  Copyright (c) 2013 Radtastical Inc Inc. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <UIKit/UIKit.h>

@interface RadTextField : UITextField
@property (nonatomic, strong) NSString *formId;
@property (nonatomic, strong) NSString *itemId;
@end

@interface RadTextView : UITextView
@property (nonatomic, strong) NSString *formId;
@property (nonatomic, strong) NSString *itemId;
@end

@interface RadSlider : UISlider
@property (nonatomic, strong) NSString *formId;
@property (nonatomic, strong) NSString *itemId;
@end

@interface RadTableViewController : UITableViewController <UITextViewDelegate, UITextFieldDelegate>
@property (nonatomic, strong) NSDictionary *contents;

- (instancetype) initWithParameterString:(NSString *) parameterString;
- (void) push:(UIViewController *) viewController;
@end
