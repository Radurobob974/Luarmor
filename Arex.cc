print("khen.cc")


game.StarterGui:SetCore("SendNotification", {
    Title = "Loading..",
    Text = "Severe.cc",
    Duration = 3
})

task.wait(3.2)

game.StarterGui:SetCore("SendNotification", {
    Title = "Severe.cc | PAID |  ",
    Text = "Success!",
    Duration = 2
})

task.wait(0.7)

if game.PlaceId == 6675738196 or game.PlaceId == 120199226347951 or game.PlaceId == 71123788828242 or game.PlaceId == 122600683509740 then
  loadstring(game:HttpGet("https://raw.githubusercontent.com/Pixeluted/adoniscries/main/Source.lua",  true))()
end





local player = game.Players.LocalPlayer
if not player then return end
local playerGui = player:WaitForChild("PlayerGui")
local tweenservice = game:GetService("TweenService")
local Lighting = game:GetService("Lighting")
local CoreGui = game:GetService("CoreGui")
local SoundService = game:GetService("SoundService")

local blur = Instance.new("BlurEffect")
blur.Size = 0
blur.Parent = Lighting

tweenservice:Create(blur, TweenInfo.new(1), {Size = 24}):Play()

local screenGui = Instance.new("ScreenGui")
screenGui.Parent = playerGui
screenGui.Name = "ProgressGui"

local frame = Instance.new("Frame")
frame.Size = UDim2.new(0, 400, 0, 250)
frame.Position = UDim2.new(0.5, -200, 0.5, -125)
frame.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
frame.BorderSizePixel = 0
frame.Parent = screenGui

local frameCorner = Instance.new("UICorner")
frameCorner.CornerRadius = UDim.new(0, 10)
frameCorner.Parent = frame

local title = Instance.new("TextLabel")
title.Size = UDim2.new(1, 0, 0, 60)
title.Position = UDim2.new(0, 0, 0, 20)
title.BackgroundTransparency = 1
title.Text = "Severe.cc | PAID |  "
title.TextColor3 = Color3.fromRGB(250, 250, 250)
title.TextSize = 40
title.Font = Enum.Font.SourceSansBold
title.Parent = frame

local progressFrame = Instance.new("Frame")
progressFrame.Size = UDim2.new(0, 300, 0, 5)
progressFrame.Position = UDim2.new(0.5, -150, 0, 120)
progressFrame.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
progressFrame.BorderSizePixel = 0
progressFrame.Parent = frame

local progressFrameCorner = Instance.new("UICorner")
progressFrameCorner.CornerRadius = UDim.new(0, 5)
progressFrameCorner.Parent = progressFrame

local progressBar = Instance.new("Frame")
progressBar.Size = UDim2.new(0, 0, 1, 0)
progressBar.BackgroundColor3 = Color3.fromRGB(250, 250, 250)
progressBar.BorderSizePixel = 0
progressBar.Parent = progressFrame

local progressBarCorner = Instance.new("UICorner")
progressBarCorner.CornerRadius = UDim.new(0, 5)
progressBarCorner.Parent = progressBar

local statusText = Instance.new("TextLabel")
statusText.Size = UDim2.new(1, 0, 0, 30)
statusText.Position = UDim2.new(0, 0, 0, 140)
statusText.BackgroundTransparency = 1
statusText.Text = "Loading Please Wait"
statusText.TextColor3 = Color3.fromRGB(255, 255, 255)
statusText.TextSize = 18
statusText.Font = Enum.Font.SourceSans
statusText.Parent = frame
statusText.Visible = true

local startTime = tick()
local milestones = {0, 0.2, 0.5, 1}
local durations = {1, 1, 1} 
local totalTime = 0

local sound = Instance.new("Sound")
sound.SoundId = "rbxassetid://109251866871430"
sound.Volume = 1
sound.Looped = false
sound.Parent = SoundService
sound:Play()

for i, milestone in pairs(milestones) do
    if i > 1 then
        totalTime = totalTime + durations[i - 1]
        while tick() - startTime < totalTime do
            local progress = (tick() - (startTime + totalTime - durations[i - 1])) / durations[i - 1]
            progressBar.Size = UDim2.new(milestones[i - 1] + (milestone - milestones[i - 1]) * progress, 0, 1, 0)
            wait()
        end
        progressBar.Size = UDim2.new(milestone, 0, 1, 0) -- Ensure it hits the milestone
    end
end

statusText:Destroy()
local successText = Instance.new("TextLabel")
successText.Size = UDim2.new(1, 0, 0, 30)
successText.Position = UDim2.new(0, 0, 0, 140)
successText.BackgroundTransparency = 1
successText.Text = "Loaded successfully!"
successText.TextColor3 = Color3.fromRGB(255, 255, 255)
successText.TextSize = 18
successText.Font = Enum.Font.SourceSans
successText.Parent = frame
successText.Visible = false

successText.Visible = true

tweenservice:Create(blur, TweenInfo.new(1), {Size = 0}):Play()
wait(1.5)
sound:Destroy()
blur:Destroy()
screenGui:Destroy()

task.wait(0.7)

local tweenservice = game:GetService("TweenService")
local Lighting = game:GetService("Lighting")
local CoreGui = game:GetService("CoreGui")
local SoundService = game:GetService("SoundService")

local blur = Instance.new("BlurEffect")
blur.Size = 0
blur.Parent = Lighting

tweenservice:Create(blur, TweenInfo.new(1), {Size = 24}):Play()

local gui = Instance.new("ScreenGui")
gui.Name = "ArxLoader"
gui.IgnoreGuiInset = true
gui.ResetOnSpawn = false
gui.ZIndexBehavior = Enum.ZIndexBehavior.Sibling
gui.Parent = CoreGui

local frame = Instance.new("Frame")
frame.Size = UDim2.new(1, 0, 1, 0)
frame.BackgroundTransparency = 1
frame.Parent = gui

local image = Instance.new("ImageLabel")
image.Image = "rbxassetid://109251866871430"
image.Size = UDim2.new(0, 150, 0, 150)
image.Position = UDim2.new(0.5, -75, 0.5, -110)

image.BackgroundTransparency = 1
image.ImageTransparency = 0
image.Parent = frame

local text = Instance.new("TextLabel")
text.Text = ""
text.Font = Enum.Font.Code
text.TextSize = 22
text.TextColor3 = Color3.fromRGB(255, 255, 255)
text.BackgroundTransparency = 1
text.Size = UDim2.new(0, 200, 0, 50)
text.Position = UDim2.new(0.5, -100, 0.5, 30)
text.TextTransparency = 0
text.Parent = frame

local sound = Instance.new("Sound")
sound.SoundId = "rbxassetid://109251866871430"
sound.Volume = 1
sound.Looped = false
sound.Parent = SoundService
sound:Play()

task.delay(
    3.5,
    function()
        tweenservice:Create(blur, TweenInfo.new(1), {Size = 0}):Play()
        tweenservice:Create(image, TweenInfo.new(1), {ImageTransparency = 1}):Play()
        tweenservice:Create(text, TweenInfo.new(1), {TextTransparency = 1}):Play()
        task.wait(1.2)
        sound:Destroy()
        blur:Destroy()
        gui:Destroy()
    end
)

task.wait(1.5)

if game.PlaceId == 2788229376 then
   game.StarterGui:SetCore("SendNotification", {
       Title = "Severe.cc | PAID |  ",
       Text = "Da hood Detected, Executing Bypass!",
       Duration = 3
   })
  loadstring(game:HttpGet("https://raw.githubusercontent.com/shakar60/RickWare.CC/main/Misc/Bypasses", true))()
end

task.wait(0.2)

local player = game.Players.LocalPlayer
local CoreGui = game:GetService("CoreGui")

local screenGui = Instance.new("ScreenGui")
screenGui.Parent = CoreGui
screenGui.Name = "CustomInterface"

local frame = Instance.new("Frame")
frame.Size = UDim2.new(0, 400, 0, 30)
frame.Position = UDim2.new(1, -400, 0, 0)
frame.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
frame.BorderSizePixel = 0
frame.Active = true
frame.Draggable = true
frame.Parent = screenGui

local colorBar = Instance.new("Frame")
colorBar.Size = UDim2.new(0, 4, 1, 0)
colorBar.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
colorBar.BorderSizePixel = 0
colorBar.Parent = frame

local elAssetId = "rbxassetid://107174099040480" -- "A" or EL equivalent
local playerLogoAssetId = "rbxassetid://88461195332131" -- Player logo
local clockLogoAssetId = "rbxassetid://99761949668282" -- Clock logo

local elImage = Instance.new("ImageLabel")
elImage.Size = UDim2.new(0, 30, 0, 30)
elImage.Position = UDim2.new(0, 10, 0.5, -15)
elImage.BackgroundTransparency = 1
elImage.Image = elAssetId
elImage.Parent = frame

local playerLogo = Instance.new("ImageLabel")
playerLogo.Size = UDim2.new(0, 24, 0, 24)
playerLogo.Position = UDim2.new(0, 100, 0.5, -12)
playerLogo.BackgroundTransparency = 1
playerLogo.Image = playerLogoAssetId
playerLogo.Parent = frame

local clockLogo = Instance.new("ImageLabel")
clockLogo.Size = UDim2.new(0, 18, 0, 18)
clockLogo.Position = UDim2.new(0, 300, 0.5, -9) -- Positioned before clock text
clockLogo.BackgroundTransparency = 1
clockLogo.Image = clockLogoAssetId
clockLogo.Parent = frame

local textLabel = Instance.new("TextLabel")
textLabel.Size = UDim2.new(0, 200, 1, 0)
textLabel.Position = UDim2.new(0, 100, 0, 0) -- Adjusted to start after player logo
textLabel.BackgroundTransparency = 1
textLabel.Text = "Severe.cc | PAID |  " .. player.DisplayName
textLabel.TextColor3 = Color3.fromRGB(255, 255, 255)
textLabel.Font = Enum.Font.Code
textLabel.TextSize = 13
textLabel.Parent = frame

local clockText = Instance.new("TextLabel")
clockText.Size = UDim2.new(0, 50, 1, 0)
clockText.Position = UDim2.new(0, 325, 0, 0)
clockText.BackgroundTransparency = 1
clockText.TextColor3 = Color3.fromRGB(255, 255, 255)
clockText.Font = Enum.Font.Code
clockText.TextSize = 13
clockText.Parent = frame

coroutine.wrap(function()
    while task.wait(1) do
        local t = os.date("*t")
        clockText.Text = string.format("%02d:%02d:%02d", t.hour, t.min, t.sec)
    end
end)()

task.wait(0.1)

local runservice = game:GetService("RunService")
local camera = workspace.CurrentCamera
local CoreGui = game:GetService("CoreGui")
local players = game:GetService("Players")
local replicatedStorage = game:GetService("ReplicatedStorage")
local localplayer = players.LocalPlayer
local inputservice = game:GetService("UserInputService")
local tweenservice = game:GetService("TweenService")
local mouse = localplayer:GetMouse()
local Lighting = game:GetService("Lighting")
local SoundService = game:GetService("SoundService")

local repo = "https://raw.githubusercontent.com/khen791/library/main/"

local library = loadstring(game:HttpGet(repo .. "Library.lua..txt"))()

local themeManager = loadstring(game:HttpGet(repo .. "nini/ThemeManager.lua"))()

local saveManager = loadstring(game:HttpGet(repo .. "nini/SaveManager.lua"))()


local screenGui = Instance.new("ScreenGui")
screenGui.Name = "Raxhena"
screenGui.Parent = game:GetService("CoreGui")

local toggleButton = Instance.new("ImageButton")
toggleButton.Name = "ToggleButton"
toggleButton.Size = UDim2.new(0, 100, 0, 100)
toggleButton.Position = UDim2.new(1, -110, 0, 10)
toggleButton.BackgroundTransparency = 1
toggleButton.Image = "rbxassetid://109251866871430"
toggleButton.Draggable = true
toggleButton.Parent = screenGui

local isVisible = true
toggleButton.MouseButton1Click:Connect(
    function()
        if library and library.Toggle then
            library:Toggle()
            isVisible = not isVisible
        end
    end
)

local game_name = game:GetService("MarketplaceService"):GetProductInfo(game.PlaceId).Name

local display_name = game:GetService("Players").LocalPlayer.DisplayName

local Hooks = {}

getgenv().Arx = {
    Camlock = {
        enabled = true,
        target = nil,
        resolver = false,
        smoothness = 0.1,
        prediction = 0.1,
        hitpart = "HumanoidRootPart"
    },
    
    Easing = {
        style = Enum.EasingStyle.Sine,
        direction = Enum.EasingDirection.InOut
    },
    
    ForcehitHC = {
         Enabled = false,
         Part = "Head"
    },
    
    Targetaim = {
        enabled = true,
        Method = "Standard",
        oneMethod = false,
        predictionEnabled = true,
        Target = nil,
        prediction = 0.1,
        jumpOffset = 0.8,
        hitpart = "HumanoidRootPart"
    }
}

getgenv().autoair = {
    enabled = true,
    delay = 0.1,
    AirPart = "RightFoot"
}

getgenv().antilock = {
    enabled = false,
    mode = "Sky"
}

getgenv().GroundShotDetection = {
    Enabled = false,
    GroundShotThreshold = 0.5,
    DetectionRange = 20
}

getgenv().hit = {
    detection = true,
    logs = true,
    notify_duration = 1,
    sound_enabled = true,
    sound_id = "Neverlose",
    sound_volume = 1
}

getgenv().crosshair = {
    enabled = false,
    refreshrate = 0,
    mode = "center",
    position = Vector2.new(0, 0),
    width = 1.5,
    length = 10,
    radius = 10,
    color = Color3.fromRGB(255, 255, 255),
    spin = true,
    spin_speed = 120,
    spin_max = 200,
    spin_style = Enum.EasingStyle.Circular,
    resize = true,
    resize_speed = 150,
    resize_min = 5,
    resize_max = 22
}

local window = library:CreateWindow({
    Title = 'AREX.CC [khen.cc] | ' .. game_name,
    Center = true,
    Size = UDim2.new(0, 550, 0, 350),
    AutoShow = true
})

library:Notify("Script Executed on " .. game_name, 2)

local autoair = getgenv().autoair

local Arx = getgenv().Arx

local locking = false

local TweenService = game:GetService("TweenService")
local CoreGui = game:GetService("CoreGui")
local replicatedStorage = game:GetService("ReplicatedStorage")
local Lighting = game:GetService("Lighting")
local SoundService = game:GetService("SoundService")
local RunService = game:GetService("RunService")
local Players = game:GetService("Players")
local LocalPlayer = Players.LocalPlayer
local PlayerGui = LocalPlayer:WaitForChild("PlayerGui")
local Camera = workspace.CurrentCamera

local function FindNearestEnemy()
  local closest = nil
	local shortestDist = math.huge
	for _, plr in ipairs(Players:GetPlayers()) do
		if plr ~= LocalPlayer and plr.Character and plr.Character:FindFirstChild("HumanoidRootPart") then
			local pos = plr.Character.HumanoidRootPart.Position
			local screenPos, onScreen = Camera:WorldToViewportPoint(pos)
			if onScreen then
				local dist = (Vector2.new(screenPos.X, screenPos.Y) - Camera.ViewportSize / 2).Magnitude
				if dist < shortestDist then
					shortestDist = dist
					closest = plr
				end
			end
		end
	end
	return closest
end

RunService.PostSimulation:Connect(function()
    if Arx.Camlock.enabled then
        local camTarget = Arx.Camlock.target
        if camTarget and camTarget.Character then
            local camPart = camTarget.Character:FindFirstChild(Arx.Camlock.hitpart)
            if camPart then
                local predicted = camPart.Position + (camPart.Velocity * Arx.Camlock.prediction)
                local camGoal = CFrame.new(Camera.CFrame.Position, predicted)
                Camera.CFrame = Camera.CFrame:Lerp(camGoal, Arx.Camlock.smoothness, Arx.Easing.style, Arx.Easing.direction)
            end
        end
    end

    if autoair.enabled then
        local Victim = Arx.Targetaim.target
        if Victim and Victim.Character then
            local TargetRootPart = Victim.Character:FindFirstChild(autoair.AirPart)
            if TargetRootPart then
                local TargetVel = TargetRootPart.Velocity
                if TargetVel.Y > 25 then
                    local Character = LocalPlayer.Character
                    if Character then
                        local Tool = Character:FindFirstChildOfClass("Tool")
                        if Tool then
                            task.wait(autoair.delay)
                            Tool:Activate()
                        end
                    end
                end
            end
        end
    end
end)

if Arx.Targetaim.Method == "Standard" and not Arx.ForcehitHC.Enabled and not Arx.Targetaim.oneMethod then
    local __namecall
    __namecall = hookmetamethod(game, "__namecall", newcclosure(function(Self, ...)
        local Args = {...}
        local Method = tostring(getnamecallmethod())
        if not checkcaller() and Method == "FireServer" then
            for i, Arg in pairs(Args) do
                if typeof(Arg) == "Vector3" and Arx.Targetaim.enabled then
                    local Target = Arx.Targetaim.target
                    if Target and Target.Character and Arx.Targetaim.hitpart and Target.Character[Arx.Targetaim.hitpart] then
                        local TargetPart = Target.Character[Arx.Targetaim.hitpart]
                        local offset = Arx.Targetaim and Arx.Targetaim.jumpOffset or 0
                        local predictedPosition = TargetPart.Position
                            + (TargetPart.Velocity * Arx.Targetaim.prediction)
                            + Vector3.new(0, Arx.Targetaim.jumpOffset, 0)
                            
                        Args[i] = predictedPosition
                    end
                    return __namecall(Self, unpack(Args))
                end
            end
        end
        return __namecall(Self, ...)
    end))
end

local function setup_hooks()
    local function TargetFuturePosition()
        if not target or not target.Character then
            return nil
        end
        local target_part = target.Character[Arx.Targetaim.hitpart]
        if not target_part then
            return nil
        end

        local position = target_part.Position
        if Arx.Targetaim.predictionEnabled then
            position = position + (target_part.Velocity * Arx.Targetaim.prediction) + Vector3.new(0, Arx.Targetaim.jumpOffset or 0, 0)
        end
        return position
    end

    Hooks[1] =
        hookmetamethod(
        mouse,
        "__index",
        newcclosure(
            function(self, index)
                if
                    index == "Hit" and locking and (Arx.Targetaim.Method == "Index" or Arx.Targetaim.Method == "Combo") and not Arx.ForcehitHC.Enabled and not Arx.Targetaim.oneMethod and
                        target and
                        target.Character and
                        target.Character:FindFirstChild(Arx.Targetaim.hitpart)
                 then
                    local futurePos = TargetFuturePosition()
                    if futurePos then
                        return CFrame.new(futurePos)
                    end
                end
                return Hooks[1](self, index)
            end
        )
    )
end

if Arx.Targetaim.Method == "Mouse" and not Arx.ForcehitHC.Enabled and not Arx.Targetaim.oneMethod then
    local index = nil
    index = hookmetamethod(game, "__index", newcclosure(function(Object, Key, ...)
        if Object:IsA("Mouse") and Key == "Hit" then
            local Target = Arx.Targetaim.target
            if Arx.Targetaim.enabled and Target and Target.Character and Arx.Targetaim.hitpart and Target.Character[Arx.Targetaim.hitpart] then
                local TargetPart = Target.Character[Arx.Targetaim.hitpart]
                local offset = Arx.Targetaim and Arx.Targetaim.jumpOffset or 0
                local predictedPosition = TargetPart.Position
                    + (TargetPart.Velocity * Arx.Targetaim.prediction)
                    + Vector3.new(0, Arx.Targetaim.jumpOffset, 0)
                return CFrame.new(predictedPosition)
            end
        end
        return index(Object, Key, ...)
    end))
end

local function handle_character_added(char)
    char.ChildAdded:Connect(
        function(child)
            if child:IsA("Tool") then
                child.Activated:Connect(tool_activated)
            end
        end
    )
end

local function onHeartbeat()
    if not getgenv().Arx.Camlock.resolver then return end

    for _, Target in pairs(Players:GetPlayers()) do
        if Target ~= LocalPlayer and Target.Character then
            local Character = Target.Character
            local Humanoid = Character:FindFirstChildOfClass("Humanoid")

            if Humanoid and Humanoid.MoveDirection.Magnitude > 0 then
                local moveVelocity = Humanoid.MoveDirection * 16

                local TargetParts = {
                    "HumanoidRootPart",
                    "UpperTorso",
                    "LowerTorso",
                    "LeftUpperLeg",
                    "LeftLowerLeg",
                    "RightUpperLeg",
                    "RightLowerLeg",
                    "Head",
                    "LeftHand",
                    "RightHand"
                }

                for _, partName in ipairs(TargetParts) do
                    local Part = Character:FindFirstChild(partName)
                    if Part then
                        Part.Velocity = moveVelocity
                        Part.AssemblyLinearVelocity = moveVelocity
                    end
                end
            end
        end
    end
end

if Arx.Targetaim.oneMethod and not Arx.ForcehitHC.Enabled then
  local mt = getrawmetatable(game)
  local oldNameCall = mt.__namecall
  setreadonly(mt, false)

  mt.__namecall = newcclosure(function(Self, ...)
      local args = {...}
      local methodName = getnamecallmethod()
      if not checkcaller() and methodName == "FireServer" and Arx.Targetaim.enabled then
          local target = Arx.Targetaim.target
          if target and target.Character then
              local targetPart = target.Character[Arx.Targetaim.hitpart]
              if targetPart then
                  for i, arg in ipairs(args) do
                      if typeof(arg) == "Vector3" then
                          args[i] = targetPart.Position
                              + targetPart.Velocity * Arx.Targetaim.prediction
                              + Vector3.new(0, Arx.Targetaim.jumpOffset, 0)
                          break
                      end
                  end
              end
          end
      end

      return oldNameCall(Self, unpack(args))
  end)

  setreadonly(mt, true)
end

RunService.Heartbeat:Connect(function()
    if Arx.ForcehitHC.Enabled and Target then
        local CurrentPosition = LocalPlayer.Character.HumanoidRootPart.Position
        local ShootDirection = LocalPlayer.Character.HumanoidRootPart.CFrame.LookVector
        local ShootPosition = CurrentPosition + ShootDirection * 10
        local Normal = ShootDirection.unit
        local Offset = Normal * 0.5
        local ClosestPart = Target.Character:FindFirstChild(Arx.ForcehitHC.Part) or "Head"

        if ClosestPart and not Target.Character:FindFirstChildOfClass("ForceField") then
            local Args = {
                [1] = "Shoot",
                [2] = {
                    [1] = {
                        [1] = {
                            ["Instance"] = ClosestPart,
                            ["Normal"] = Normal,
                            ["Position"] = CurrentPosition
                        }
                    },
                    [2] = {
                        [1] = {
                            ["thePart"] = ClosestPart,
                            ["theOffset"] = CFrame.new(Offset)
                        }
                    },
                    [3] = ShootPosition,
                    [4] = CurrentPosition,
                    [5] = tick()
                }
            }

            replicatedStorage.MainEvent:FireServer(unpack(Args))
        end
    end 
end)


local Players = game:GetService("Players")
local RunService = game:GetService("RunService")

RunService.Heartbeat:Connect(function()
    local player = Players.LocalPlayer
    local character = player.Character

    if character and character:FindFirstChild("HumanoidRootPart") then
        local humanoidRootPart = character.HumanoidRootPart
        local vel = humanoidRootPart.Velocity

       
        if getgenv().antilock.enabled then
            if getgenv().antilock.mode == "Predbreaker" then
                humanoidRootPart.Velocity = Vector3.new(0, 0, 0)
            elseif getgenv().antilock.mode == "Sky" then
                humanoidRootPart.Velocity = Vector3.new(0, 100, 0)
            end
        end

        RunService.RenderStepped:Wait()
        humanoidRootPart.Velocity = vel
    end
end)

local Players = game:GetService("Players")
local localPlayer = Players.LocalPlayer
local character = localPlayer.Character or localPlayer.CharacterAdded:Wait()
local humanoid = character:WaitForChild("Humanoid")

local function isGroundShot(hitPosition)
    local rootPart = character:FindFirstChild("HumanoidRootPart")
    if not rootPart then return false end

    local feetPosition = rootPart.Position - Vector3.new(0, humanoid.HipHeight, 0)
    local distanceToFeet = (hitPosition - feetPosition).Magnitude
    return distanceToFeet <= getgenv().GroundShotDetection.GroundShotThreshold
end

local function onCharacterAdded(newCharacter)
    character = newCharacter
    humanoid = character:WaitForChild("Humanoid")
end

localPlayer.CharacterAdded:Connect(onCharacterAdded)

workspace:GetPropertyChangedSignal("CurrentCamera"):Connect(function()
    workspace.CurrentCamera.ChildAdded:Connect(function(child)
        if getgenv().GroundShotDetection.Enabled then
            if child:IsA("BasePart") and child.Name == "Bullet" then
                local rootPart = character:FindFirstChild("HumanoidRootPart")
                if rootPart and (child.Position - rootPart.Position).Magnitude <= getgenv().GroundShotDetection.DetectionRange then
                    if isGroundShot(child.Position) then
                    end
                end
            end
        end
    end)
end)

local crosshair = getgenv().crosshair

local old
old =
    hookfunction(
    Drawing.new,
    function(class, properties)
        local drawing = old(class)
        for i, v in next, properties or {} do
            drawing[i] = v
        end
        return drawing
    end
)

local function solve(angle, radius)
    return Vector2.new(math.sin(math.rad(angle)) * radius, math.cos(math.rad(angle)) * radius)
end

local last_render = 0
local drawings = {
    crosshair = {},
    text = {
        Drawing.new("Text", {Size = 13, Font = 2, Outline = true, Text = "Arex ", Color = Color3.new(1, 1, 1)}),
        Drawing.new("Text", {Size = 13, Font = 2, Outline = true, Text = ".cc", Color = Color3.new(0, 0, 0)})
    }
}

for idx = 1, 4 do
    drawings.crosshair[idx] = Drawing.new("Line")
    drawings.crosshair[idx + 4] = Drawing.new("Line")
end

getgenv().Arx.Visualize = getgenv().Arx.Visualize or {
    enabled = false,
    color = {
        Fill = Color3.fromRGB(255, 255, 255),
        Outline = Color3.fromRGB(255, 255, 255)
    }
}

local RunService = game:GetService("RunService")
local Players = game:GetService("Players")
local LocalPlayer = Players.LocalPlayer

local highlight = Instance.new("Highlight")
highlight.FillTransparency = 0.4
highlight.OutlineTransparency = 0
highlight.Enabled = false
highlight.Parent = game:GetService("CoreGui")

RunService.RenderStepped:Connect(function()
    local vis = getgenv().Arx.Visualize

    if not vis.enabled then
        highlight.Enabled = false
        return
    end

    local target = getgenv().Arx.Targetaim and getgenv().Arx.Targetaim.target
    if target and target.Character then
        highlight.Adornee = target.Character

        highlight.FillTransparency = 0.4
        highlight.FillColor = vis.color.Fill

        highlight.OutlineTransparency = 0
        highlight.OutlineColor = vis.color.Outline

        highlight.Enabled = true
    else
        highlight.Enabled = false
    end
end)

local HitSoundId = {
    Bameware = "rbxassetid://3124331820",
    Neverlose = "rbxassetid://6534948092",
    Bell = "rbxassetid://6534947240",
    Bubble = "rbxassetid://6534947588",
    Pick = "rbxassetid://1347140027",
    Pop = "rbxassetid://198598793",
    Rust = "rbxassetid://1255040462",
    Sans = "rbxassetid://3188795283",
    Fart = "rbxassetid://130833677",
    Big = "rbxassetid://5332005053",
    Vine = "rbxassetid://5332680810",
    Bruh = "rbxassetid://4578740568",
    Skeet = "rbxassetid://5633695679",
    Fatality = "rbxassetid://6534947869",
    Bonk = "rbxassetid://5766898159",
    Minecraft = "rbxassetid://4018616850"
}

local hitSoundsNames = {"Bameware", "Neverlose", "Bubble", "Pick", "Pop", "Rust", "Sans", "Fart", "Big", "Vine", "Bruh", "Skeet", "Fatality", "Bonk","Minecraft"}

local last_health = {}

RunService.PostSimulation:Connect(function()
    local Arx = getgenv().Arx
    if not Arx then return end

    local target = Arx.Targetaim and Arx.Targetaim.target
    local locking = Arx.Camlock and Arx.Camlock.enabled
    local humanoid = target and target.Character and target.Character:FindFirstChild("Humanoid")

    if locking and target and humanoid and hit.detection then
        local current_health = humanoid.Health

        if not last_health[target.UserId] then
            last_health[target.UserId] = current_health
        end

        if current_health < last_health[target.UserId] then
            if hit.sound_enabled and HitSoundId[hit.sound_id] then
                local sound = Instance.new("Sound")
                sound.SoundId = HitSoundId[hit.sound_id]
                sound.Volume = hit.sound_volume
                sound.Parent = workspace
                sound:Play()
                game:GetService("Debris"):AddItem(sound, 2)
            end

            if hit.logs and library then
                library:Notify("Hit: " .. target.DisplayName, hit.notify_duration)
            end
        end

        last_health[target.UserId] = current_health
    end
end)

getgenv().HitChams = {
    enabled = false,
    color = Color3.fromRGB(255, 255, 255),
    transparency = 0.4,
    material = Enum.Material.ForceField,
    duration = 0.3
}

local RunService = game:GetService("RunService")
local last_health = {}
local originals = {}

RunService.PostSimulation:Connect(function()
    local Arx = getgenv().Arx
    if not Arx or not getgenv().HitChams.enabled then return end

    local target = Arx.Targetaim and Arx.Targetaim.target
    local locking = Arx.Camlock and Arx.Camlock.enabled
    local humanoid = target and target.Character and target.Character:FindFirstChild("Humanoid")

    if locking and target and humanoid and hit.detection then
        local current_health = humanoid.Health
        last_health[target.UserId] = last_health[target.UserId] or current_health

        if current_health < last_health[target.UserId] then
            local char = target.Character
            if char then
                for _, part in ipairs(char:GetDescendants()) do
                    if part:IsA("BasePart") then
                        originals[part] = originals[part] or {
                            Color = part.Color,
                            Transparency = part.Transparency,
                            Material = part.Material
                        }
                        part.Color = getgenv().HitChams.color
                        part.Transparency = getgenv().HitChams.transparency
                        part.Material = getgenv().HitChams.material
                    end
                end

                task.delay(getgenv().HitChams.duration, function()
                    if char then
                        for _, part in ipairs(char:GetDescendants()) do
                            if part:IsA("BasePart") and originals[part] then
                                local data = originals[part]
                                part.Color = data.Color
                                part.Transparency = data.Transparency
                                part.Material = data.Material
                                originals[part] = nil
                            end
                        end
                    end
                end)
            end
        end

        last_health[target.UserId] = current_health
    end
end)

getgenv().AntiAimViewer = {
    enabled = false,
}

local China = setmetatable({}, {
    __index = function(_, service)
        return game:GetService(service)
    end
})

local Players = China.Players
local ReplicatedStorage = China.ReplicatedStorage
local LocalPlayer = Players.LocalPlayer
local Mouse = LocalPlayer:GetMouse()
local MainEvent = ReplicatedStorage:FindFirstChild("MainEvent")

local function Bypass(Entity)
    Entity.ChildAdded:Connect(function(Child)
        if Child:IsA("Tool") then
            Child.Activated:Connect(function()
                if MainEvent then
                    MainEvent:FireServer("UpdateMousePos", Mouse.Hit.Position)
                end
            end)
        end
    end)
end

local function Alive(Player)
    return Player and Player.Character and Player.Character:FindFirstChild("Humanoid") and Player.Character:FindFirstChild("Head")
end

LocalPlayer.CharacterAdded:Connect(function(Character)
    Bypass(Character)
end)

if getgenv().AntiAimViewer then
    if Alive(LocalPlayer) then
        LocalPlayer.Character.Humanoid:UnequipTools()
        Bypass(LocalPlayer.Character)
    end
end

local Hook
Hook = hookmetamethod(game, "__namecall", function(self, ...)
    local Args = {...}
    local Method = getnamecallmethod()

    if not checkcaller() and Method == "FireServer" and self.Name == "MainEvent" and Args[1] == "UpdateMousePos" then
        if getgenv().AntiAimViewer then
            Args[2] = Mouse.Hit.Position
        end
        return self.FireServer(self, unpack(Args))
    end

    return Hook(self, ...)
end)

local function startAutoPrediction()
	if autoPredictionRunning then return end
	autoPredictionRunning = true

	task.spawn(function()
		while autoPredictionRunning do
			local ping = getPing()
			local pred = 0.19901461

			if ping <= 60 then
                pred = 0.1133182551
            elseif ping <= 70 then
                pred = 0.1363547424
            elseif ping <= 80 then
                pred = 0.136908550418922
			elseif ping <= 100 then
				pred = 0.1353554
			elseif ping <= 120 then
				pred = 0.1516646
			elseif ping <= 150 then
				pred = 0.1680549
			elseif ping <= 180 then
				pred = 0.1680549
			elseif ping <= 200 then
				pred = 0.2017917
		    elseif ping <= 250 then
		        pred = 0.1985261
            elseif ping <= 280 then
		        pred = 0.1985261
		    elseif ping <= 300 then
		        pred = 0.2014461
			else
				pred = 0.1339287
			end

			getgenv().Arx.Targetaim.prediction = pred

			task.wait(1)
		end
	end)
end

local function stopAutoPrediction()
	autoPredictionRunning = false
end

getgenv().ESPsc = {
    Enabled = false,

    Box = {
        Enabled = true,
        Color = Color3.fromRGB(255, 255, 255), -- White
    },

    Healthbar = {
        Enabled = true,
        Color = Color3.fromRGB(0, 100, 0), -- Semi-dark green
    },

    Name = {
        Enabled = true,
        Color = Color3.fromRGB(255, 255, 255), -- White
    },

    Distance = {
        Enabled = true,
        Color = Color3.fromRGB(255, 255, 0), -- Yellow
    }
}

local Players = game:GetService("Players")
local Camera = game:GetService("Workspace").CurrentCamera
local LocalPlayer = Players.LocalPlayer
local RunService = game:GetService("RunService")

local function createESP(player)
    local box = Drawing.new("Square")
    box.Visible = false
    box.Thickness = 1
    box.Filled = false

    local healthBar = Drawing.new("Square")
    healthBar.Visible = false
    healthBar.Thickness = 1
    healthBar.Filled = true

    local nameText = Drawing.new("Text")
    nameText.Visible = false
    nameText.Size = 14
    nameText.Center = true
    nameText.Outline = true

    local distanceText = Drawing.new("Text")
    distanceText.Visible = false
    distanceText.Size = 13
    distanceText.Center = true
    distanceText.Outline = true

    RunService.RenderStepped:Connect(function()
    if getgenv().ESPsc.Enabled 
    and player.Character 
    and player.Character:FindFirstChild("HumanoidRootPart") 
    and player.Character:FindFirstChildOfClass("Humanoid")
    and LocalPlayer.Character
    and LocalPlayer.Character:FindFirstChild("HumanoidRootPart") then
        
        local rootPart = player.Character.HumanoidRootPart
        local humanoid = player.Character:FindFirstChildOfClass("Humanoid")
        local screenPos, onScreen = Camera:WorldToViewportPoint(rootPart.Position)

        if onScreen then
            local distance = (rootPart.Position - Camera.CFrame.Position).Magnitude
            local boxHeight = math.clamp(3000 / distance, 40, 300)
            local boxWidth = boxHeight / 2

            if getgenv().ESPsc.Box.Enabled then
                box.Size = Vector2.new(boxWidth, boxHeight)
                box.Position = Vector2.new(screenPos.X - boxWidth/2, screenPos.Y - boxHeight/2)
                box.Color = getgenv().ESPsc.Box.Color
                box.Visible = true
            else
                box.Visible = false
            end

            if getgenv().ESPsc.Healthbar.Enabled then
                local hpPercent = math.clamp(humanoid.Health / humanoid.MaxHealth, 0, 1)
                local hpHeight = boxHeight * hpPercent
                healthBar.Size = Vector2.new(2, hpHeight)
                healthBar.Position = Vector2.new(box.Position.X - 4, box.Position.Y + (boxHeight - hpHeight))
                healthBar.Color = getgenv().ESPsc.Healthbar.Color
                healthBar.Visible = true
            else
                healthBar.Visible = false
            end

            if getgenv().ESPsc.Name.Enabled then
                nameText.Text = player.DisplayName
                nameText.Position = Vector2.new(screenPos.X, box.Position.Y - 16)
                nameText.Color = getgenv().ESPsc.Name.Color
                nameText.Visible = true
            else
                nameText.Visible = false
            end

            if getgenv().ESPsc.Distance.Enabled then
                distanceText.Text = string.format("[%dm]", distance)
                distanceText.Position = Vector2.new(screenPos.X, box.Position.Y + boxHeight + 2)
                distanceText.Color = getgenv().ESPsc.Distance.Color
                distanceText.Visible = true
            else
                distanceText.Visible = false
            end

        else
            box.Visible = false
            healthBar.Visible = false
            nameText.Visible = false
            distanceText.Visible = false
        end
    else
        box.Visible = false
        healthBar.Visible = false
        nameText.Visible = false
        distanceText.Visible = false
    end
  end)
end

for _, player in pairs(Players:GetPlayers()) do
    if player ~= LocalPlayer then
        createESP(player)
    end
end

Players.PlayerAdded:Connect(function(player)
    if player ~= LocalPlayer then
        createESP(player)
    end
end)

getgenv().highjump =
    getgenv().highjump or
    {
        enabled = false,
        power = 120
    }

local Players = game:GetService("Players")
local RunService = game:GetService("RunService")
local lp = Players.LocalPlayer

RunService.Heartbeat:Connect(
    function()
        if not getgenv().highjump.enabled then
            return
        end

        local char = lp.Character or lp.CharacterAdded:Wait()
        local hrp = char and char:FindFirstChild("HumanoidRootPart")
        local hum = char and char:FindFirstChildOfClass("Humanoid")
        if not hrp or not hum then
            return
        end

        if hum:GetState() == Enum.HumanoidStateType.Jumping then
            hrp.Velocity = Vector3.new(hrp.Velocity.X, getgenv().highjump.power, hrp.Velocity.Z)
        end
    end
)

getgenv().cframe = getgenv().cframe or {}
local cframe = getgenv().cframe

cframe.settings = {
    enabled = false,
    showbutton = false,
    speed = 1
}

local TweenService = game:GetService("TweenService")
local CoreGui = game:GetService("CoreGui")
local Players = game:GetService("Players")
local LocalPlayer = Players.LocalPlayer
local PlayerGui = LocalPlayer:WaitForChild("PlayerGui")
local RunService = game:GetService("RunService")
local Camera = workspace.CurrentCamera
local UserInputService = game:GetService("UserInputService")

local ScreenGui, Button

local function CreateCFrameButton()
    if not cframe.settings.showbutton then return end
    if ScreenGui then ScreenGui:Destroy() end
    
    ScreenGui = Instance.new("ScreenGui")
    ScreenGui.Name = "SpeedCFrameGUI"
    ScreenGui.ResetOnSpawn = false
    ScreenGui.Parent = CoreGui

    Button = Instance.new("TextButton")
    Button.Name = "SpeedCFrameButton"
    Button.Size = UDim2.new(0, 60, 0, 50)
    Button.Position = UDim2.new(0.5, -95, 0.5, -35)
    Button.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
    Button.BackgroundTransparency = 0.4
    Button.Text = cframe.settings.enabled and "CFrame ON" or "CFrame OFF"
    Button.TextColor3 = Color3.fromRGB(255, 255, 255)
    Button.Font = Enum.Font.Code
    Button.TextScaled = true
    Button.TextWrapped = true
    Button.Parent = ScreenGui
    
    local Outline = Instance.new("UIStroke")
    Outline.Color = Color3.fromRGB(255, 255, 255)
    Outline.Thickness = 1
    Outline.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
    Outline.Parent = Button

    local UICorner = Instance.new("UICorner")
    UICorner.CornerRadius = UDim.new(0, 10)
    UICorner.Parent = Button

    Button.MouseButton1Click:Connect(function()
        cframe.settings.enabled = not cframe.settings.enabled
        Button.Text = cframe.settings.enabled and "CFrame ON" or "CFrame OFF"
    end)

    local dragging = false
    local startPos, startMousePos

    Button.InputBegan:Connect(function(input)
        if input.UserInputType == Enum.UserInputType.MouseButton1 or input.UserInputType == Enum.UserInputType.Touch then
            dragging = true
            startPos = Button.Position
            startMousePos = input.Position
            input.Changed:Connect(function()
                if input.UserInputState == Enum.UserInputState.End then
                    dragging = false
                end
            end)
        end
    end)

    Button.InputChanged:Connect(function(input)
        if dragging and (input.UserInputType == Enum.UserInputType.MouseMovement or input.UserInputType == Enum.UserInputType.Touch) then
            local delta = input.Position - startMousePos
            Button.Position = UDim2.new(startPos.X.Scale, startPos.X.Offset + delta.X, startPos.Y.Scale, startPos.Y.Offset + delta.Y)
        end
    end)
end

local function DestroyCFrameButton()
    if ScreenGui then
        ScreenGui:Destroy()
        ScreenGui = nil
        Button = nil
    end
end

RunService.Heartbeat:Connect(function()
    if cframe.settings.enabled and LocalPlayer.Character then
        local root = LocalPlayer.Character:FindFirstChild("HumanoidRootPart")
        local humanoid = LocalPlayer.Character:FindFirstChild("Humanoid")
        if root and humanoid then
            local move_dir = humanoid.MoveDirection
            root.CFrame = root.CFrame + (move_dir * cframe.settings.speed)
        end
    end
end)

getgenv().exlareCircle = getgenv().exlareCircle or {
    enabled = false,
    color   = Color3.fromRGB(255, 255, 255),
    radius  = 100,
    circle  = nil, 
    filled  = false 
}

if not getgenv().exlareCircle.circle then
    getgenv().exlareCircle.circle = Drawing.new("Circle")
    getgenv().exlareCircle.circle.Thickness = 1
    getgenv().exlareCircle.circle.Filled = false
end

local fillCircle = nil

game:GetService("RunService").RenderStepped:Connect(function()
    local cfg = getgenv().exlareCircle

    cfg.circle.Visible  = cfg.enabled
    cfg.circle.Color    = cfg.color
    cfg.circle.Radius   = cfg.radius
    cfg.circle.Position = Vector2.new(
        workspace.CurrentCamera.ViewportSize.X / 2,
        workspace.CurrentCamera.ViewportSize.Y / 2
    )

    if cfg.filled then
        if not fillCircle then
            fillCircle = Drawing.new("Circle")
            fillCircle.Thickness = 1
            fillCircle.Filled = true
        end
        fillCircle.Visible  = cfg.enabled
        fillCircle.Color    = cfg.color
        fillCircle.Radius   = cfg.radius
        fillCircle.Position = cfg.circle.Position
    elseif fillCircle then
        fillCircle:Remove()
        fillCircle = nil
    end
end)

getgenv().orbit = {
	enabled = false,
	distance = 10,
	height = 5,
	speed = 400,
	angle = 0
}

game:GetService("RunService").Heartbeat:Connect(function(dt)
	if not getgenv().orbit.enabled then return end

	local lp = game.Players.LocalPlayer
	if not lp.Character or not lp.Character:FindFirstChild("HumanoidRootPart") then return end

	local target = getgenv().Arx and getgenv().Arx.Camlock and getgenv().Arx.Camlock.target
	if not target or not target.Character or not target.Character:FindFirstChild("HumanoidRootPart") then return end

	local root = lp.Character.HumanoidRootPart
	local targetRoot = target.Character.HumanoidRootPart

	getgenv().orbit.angle = getgenv().orbit.angle + dt * getgenv().orbit.speed
	local angleRad = math.rad(getgenv().orbit.angle)

	local offset = Vector3.new(
		math.cos(angleRad) * getgenv().orbit.distance,
		getgenv().orbit.height,
		math.sin(angleRad) * getgenv().orbit.distance
	)

	local orbitPosition = targetRoot.Position + offset
	root.CFrame = CFrame.new(orbitPosition, targetRoot.Position)
end)

getgenv().AutoReloadEnabled = false

local function autoReload()
    while getgenv().AutoReloadEnabled do
        task.wait(0.1)

        local character = game.Players.LocalPlayer.Character
        if character then
            local tool = character:FindFirstChildWhichIsA("Tool")
            if tool then
                local ammo = tool:FindFirstChild("AMMO")
                local reloadEvent = tool:FindFirstChildWhichIsA("RemoteEvent")
                
                if ammo and reloadEvent and ammo.Value == 0 then
                    reloadEvent:FireServer()
                    task.wait(1)
                end
            end
        end
    end
end

local Players = game:GetService("Players")
local RunService = game:GetService("RunService")

local LocalPlayer = Players.LocalPlayer
local Character = LocalPlayer.Character or LocalPlayer.CharacterAdded:Wait()

LocalPlayer.CharacterAdded:Connect(function(char)
    Character = char
end)

getgenv().WalkSpeed = getgenv().WalkSpeed or {
    Value = 27,
    Enabled = false
}

RunService.Heartbeat:Connect(function()
    if getgenv().WalkSpeed.Enabled and Character and Character:FindFirstChild("HumanoidRootPart") and Character:FindFirstChild("Humanoid") then
        local HRP = Character.HumanoidRootPart
        local Humanoid = Character.Humanoid

        if Humanoid.MoveDirection.Magnitude > 0 then
            local currentY = HRP.Velocity.Y
            local horizontalVelocity = Humanoid.MoveDirection.Unit * getgenv().WalkSpeed.Value

            HRP.Velocity = Vector3.new(horizontalVelocity.X, currentY, horizontalVelocity.Z)
        end
    end
end)

getgenv().Triggerbot = getgenv().Triggerbot or {
    Enabled = false,
    Mode = "Center", 
    FOV = {
        Size = 14,
        Visible = false,
        Color = Color3.fromRGB(0, 0, 139),
        Thickness = 1.5,
        Filled = false,
        Transparency = 0.35
    },
    Delay = 0.15,
    TargetParts = {"Head", "HumanoidRootPart", "LowerTorso", "UpperTorso"},
    IgnoreTools = {"katana", "knife"}
}

local RunService = game:GetService("RunService")
local Players = game:GetService("Players")
local UserInputService = game:GetService("UserInputService")
local Camera = workspace.CurrentCamera
local LocalPlayer = Players.LocalPlayer

local rayParams = RaycastParams.new()
rayParams.FilterType = Enum.RaycastFilterType.Blacklist
rayParams.IgnoreWater = true

local triggerCircle = Drawing.new("Circle")
triggerCircle.Color = getgenv().Triggerbot.FOV.Color
triggerCircle.Thickness = getgenv().Triggerbot.FOV.Thickness
triggerCircle.Filled = getgenv().Triggerbot.FOV.Filled
triggerCircle.Transparency = getgenv().Triggerbot.FOV.Transparency
triggerCircle.Visible = false

local lastTriggerTime = 0

RunService.RenderStepped:Connect(function()
    local cfg = getgenv().Triggerbot
    if not cfg.Enabled then return end

    local center
    if cfg.Mode:lower() == "mouse" then
        local mousePos = UserInputService:GetMouseLocation()
        center = Vector2.new(mousePos.X, mousePos.Y)
    else
        center = Camera.ViewportSize * 0.5
    end

    triggerCircle.Visible = cfg.FOV.Visible
    if cfg.FOV.Visible then
        triggerCircle.Position = center
        triggerCircle.Radius = cfg.FOV.Size
    end

    if tick() - lastTriggerTime < cfg.Delay then return end

    local closestPart, minDistance = nil, cfg.FOV.Size

    for _, player in ipairs(Players:GetPlayers()) do
        if player ~= LocalPlayer and player.Character then
            for _, partName in ipairs(cfg.TargetParts) do
                local part = player.Character:FindFirstChild(partName)
                if part then
                    local screenPos, onScreen = Camera:WorldToViewportPoint(part.Position)
                    if onScreen then
                        local dist = (Vector2.new(screenPos.X, screenPos.Y) - center).Magnitude
                        if dist < minDistance then
                            rayParams.FilterDescendantsInstances = {LocalPlayer.Character}
                            local origin = Camera.CFrame.Position
                            local direction = part.Position - origin
                            local result = workspace:Raycast(origin, direction, rayParams)

                            if not result or result.Instance:IsDescendantOf(player.Character) then
                                minDistance = dist
                                closestPart = part
                            end
                        end
                    end
                end
            end
        end
    end

    if closestPart then
        local tool = LocalPlayer.Character and LocalPlayer.Character:FindFirstChildOfClass("Tool")
        if tool then
            local toolName = tool.Name:lower()
            local shouldIgnore = false
            for _, ignore in ipairs(cfg.IgnoreTools) do
                if toolName:find(ignore) then
                    shouldIgnore = true
                    break
                end
            end
            if not shouldIgnore then
                lastTriggerTime = tick()
                task.spawn(function()
                    tool:Activate()
                    task.wait(cfg.Delay / 2)
                    tool:Deactivate()
                end)
            end
        end
    end
end)

getgenv().Chams = getgenv().Chams or {
    Character = {
        Enabled = false,
        Color = Color3.fromRGB(170, 170, 170),
        Transparency = 0.2,
        Material = Enum.Material.ForceField
    },
    Tool = {
        Enabled = false,
        Color = Color3.fromRGB(170, 170, 170),
        Transparency = 0.2,
        Material = Enum.Material.ForceField
    }
}

local Players = game:GetService("Players")
local lp = Players.LocalPlayer
local original = {}

local function saveOriginal(part)
    if not original[part] then
        original[part] = {
            Color = part.Color,
            Transparency = part.Transparency,
            Material = part.Material
        }
    end
end

local function applyChams(part, cfg)
    if part:IsA("BasePart") then
        saveOriginal(part)
        part.Color = cfg.Color
        part.Transparency = cfg.Transparency
        part.Material = cfg.Material
    end
end

local function restoreChams(part)
    if original[part] then
        local data = original[part]
        part.Color = data.Color
        part.Transparency = data.Transparency
        part.Material = data.Material
    end
end

local function updateCharacter()
    if not lp.Character then return end
    for _, part in ipairs(lp.Character:GetDescendants()) do
        if part:IsA("BasePart") then
            if getgenv().Chams.Character.Enabled then
                applyChams(part, getgenv().Chams.Character)
            else
                restoreChams(part)
            end
        end
    end
end

local function updateTool(tool)
    for _, part in ipairs(tool:GetDescendants()) do
        if part:IsA("BasePart") then
            if getgenv().Chams.Tool.Enabled then
                applyChams(part, getgenv().Chams.Tool)
            else
                restoreChams(part)
            end
        end
    end
end

lp.CharacterAdded:Connect(function(char)
    char.DescendantAdded:Connect(function(obj)
        if obj:IsA("BasePart") then
            if getgenv().Chams.Character.Enabled then
                applyChams(obj, getgenv().Chams.Character)
            end
        elseif obj:IsA("Tool") then
            updateTool(obj)
        end
    end)
    updateCharacter()
end)

if lp.Character then
    lp.Character.ChildAdded:Connect(function(child)
        if child:IsA("Tool") then
            updateTool(child)
        end
    end)
end

game:GetService("RunService").Heartbeat:Connect(function()
    updateCharacter()
    if lp.Character then
        for _, child in ipairs(lp.Character:GetChildren()) do
            if child:IsA("Tool") then
                updateTool(child)
            end
        end
    end
end)

local Players = game:GetService("Players")
local RunService = game:GetService("RunService")
local LocalPlayer = Players.LocalPlayer

getgenv().LookAtEnabled = false

RunService.RenderStepped:Connect(function()
    if getgenv().LookAtEnabled then
        local char = LocalPlayer.Character
        local root = char and char:FindFirstChild("HumanoidRootPart")
        local targetPlayer = Arx and Arx.Targetaim and Arx.Targetaim.target

        if root and targetPlayer and targetPlayer.Character then
            local targetRoot = targetPlayer.Character:FindFirstChild("HumanoidRootPart")
            if targetRoot then
                local targetPos = Vector3.new(targetRoot.Position.X, root.Position.Y, targetRoot.Position.Z)
                root.CFrame = CFrame.new(root.Position, targetPos)
            end
        end
    end
end)

getgenv().WorldSettings = {
    Enabled = false,
    FogDistance = 100,
    FogColor = Color3.fromRGB(255, 255, 255),
    ClockTime = 14,
    AmbienceColor = Color3.fromRGB(255, 255, 255),
    Ambience = 0.5
}

local function ApplyWorldSettings()
    local ws = getgenv().WorldSettings
    local Lighting = game:GetService("Lighting")

    if ws.Enabled then
        Lighting.FogEnd = ws.FogDistance
        Lighting.FogColor = ws.FogColor
        Lighting.ClockTime = ws.ClockTime
        Lighting.Ambient = ws.AmbienceColor
        Lighting.Brightness = ws.Ambience
    else
        Lighting.FogEnd = 100000
        Lighting.FogColor = Color3.fromRGB(255, 255, 255)
        Lighting.ClockTime = 14
        Lighting.Ambient = Color3.fromRGB(127, 127, 127)
        Lighting.Brightness = 2
    end
end

ApplyWorldSettings()

task.spawn(function()
    while task.wait(1) do
        ApplyWorldSettings()
    end
end)

getgenv().ApplyWorldSettings = ApplyWorldSettings

local tabs = {
    combat = window:AddTab('Legit'),
    raging = window:AddTab('Blatant'),
    trigger = window:AddTab('Triggerbot'),
    visuals = window:AddTab('Misc'),
    world = window:AddTab('World'),
    teleport = window:AddTab('Teleport'),
    config = window:AddTab('Config')
}

local main = tabs.combat:AddLeftGroupbox('Main Settings')
local set = tabs.combat:AddLeftGroupbox('Settings')
local ant = tabs.combat:AddRightGroupbox('Anti Locks')
local ag = tabs.combat:AddRightGroupbox('AntiGroundShots')
local hit_group = tabs.combat:AddRightGroupbox('Hit Sounds')
local hit_chams = tabs.combat:AddRightGroupbox('Hit Chams')
local visual = tabs.visuals:AddLeftGroupbox('Visuals')
local hj = tabs.visuals:AddRightGroupbox('High jump')
local cf = tabs.visuals:AddRightGroupbox('CFrame')
local crosshair_group = tabs.visuals:AddLeftGroupbox("Crosshair")
local fov = tabs.visuals:AddLeftGroupbox('FOVs')
local ws = tabs.visuals:AddRightGroupbox('Misc #2')
local chm = tabs.visuals:AddRightGroupbox('Misc #3')
local hvh = tabs.raging:AddLeftGroupbox('Rage Menu')
local bla = tabs.raging:AddRightGroupbox('Blatants')
local trb = tabs.trigger:AddLeftGroupbox('TriggerBots')
local buy = tabs.teleport:AddLeftGroupbox('Teleport To Pad')
local wrld = tabs.world:AddLeftGroupbox('World Settings')
local wol = tabs.world:AddRightGroupbox('Settings #2')

wrld:AddToggle('ahahajsjje', {
    Text = 'Enable',
    Default = getgenv().WorldSettings.Enabled,
    Callback = function(value) getgenv().WorldSettings.Enabled = value end
})

wrld:AddSlider('iaikakkxd', {
    Text = 'Fog distance',
    Min = 70,
    Max = 300,
    Default = getgenv().WorldSettings.FogDistance,
    Rounding = 0,
    Callback = function(value)
        getgenv().WorldSettings.FogDistance = value
    end
})

wrld:AddLabel('Fog Color'):AddColorPicker('jssj', {
    Default = getgenv().WorldSettings.FogColor,
    Title = 'Fog Color',
    Transparency = nil,
    Callback = function(value)
        getgenv().WorldSettings.FogColor = value
    end
})

wrld:AddSlider('suuaauejd', {
    Text = 'Clock time',
    Min = 0,
    Max = 24,
    Default = getgenv().WorldSettings.ClockTime,
    Rounding = 0,
    Callback = function(value)
        getgenv().WorldSettings.ClockTime = value
    end
})

wol:AddInput('auuaauauueeje', {
    Text = 'Ambience',
    Default = getgenv().WorldSettings.Ambience,
    Callback = function(val)
        getgenv().WorldSettings.Ambience = tonumber(val) or 0.120
    end
})

wol:AddLabel(''):AddColorPicker('auauajdjsmw', {
    Default = getgenv().WorldSettings.AmbienceColor,
    Title = 'Ambience Color',
    Transparency = nil,
    Callback = function(value)
        getgenv().WorldSettings.AmbienceColor = value
    end
})

buy:AddButton('High-Medium Armor', function()
    local Players = game:GetService("Players")
    local lp = Players.LocalPlayer
    local char = lp.Character or lp.CharacterAdded:Wait()
    local hrp = char:WaitForChild("HumanoidRootPart")

    local function findPad(name)
        for _, obj in pairs(workspace:GetDescendants()) do
            if obj:IsA("Model") and obj.Name:lower():find(name:lower(), 1, true) then
                return obj
            end
        end
    end

    local pad = findPad("[High-Medium Armor]")
    if pad then
        local partToTP = pad:FindFirstChildWhichIsA("BasePart") or pad.PrimaryPart
        if partToTP then
            hrp.CFrame = partToTP.CFrame + Vector3.new(0, 3, 0)
        end
    end
end)

buy:AddButton('LMG', function()
    local Players = game:GetService("Players")
    local lp = Players.LocalPlayer
    local char = lp.Character or lp.CharacterAdded:Wait()
    local hrp = char:WaitForChild("HumanoidRootPart")

    local function findPad(name)
        for _, obj in pairs(workspace:GetDescendants()) do
            if obj:IsA("Model") and obj.Name:lower():find(name:lower(), 1, true) then
                return obj
            end
        end
    end

    local pad = findPad("[LMG]")
    if pad then
        local partToTP = pad:FindFirstChildWhichIsA("BasePart") or pad.PrimaryPart
        if partToTP then
            hrp.CFrame = partToTP.CFrame + Vector3.new(0, 3, 0)
        end
    end
end)

buy:AddButton('Double-Barrel', function()
    local Players = game:GetService("Players")
    local lp = Players.LocalPlayer
    local char = lp.Character or lp.CharacterAdded:Wait()
    local hrp = char:WaitForChild("HumanoidRootPart")

    local function findPad(name)
        for _, obj in pairs(workspace:GetDescendants()) do
            if obj:IsA("Model") and obj.Name:lower():find(name:lower(), 1, true) then
                return obj
            end
        end
    end

    local pad = findPad("[Double-Barrel SG]")
    if pad then
        local partToTP = pad:FindFirstChildWhichIsA("BasePart") or pad.PrimaryPart
        if partToTP then
            hrp.CFrame = partToTP.CFrame + Vector3.new(0, 3, 0)
        end
    end
end)

buy:AddButton('Tactical Shotgun', function()
    local Players = game:GetService("Players")
    local lp = Players.LocalPlayer
    local char = lp.Character or lp.CharacterAdded:Wait()
    local hrp = char:WaitForChild("HumanoidRootPart")

    local function findPad(name)
        for _, obj in pairs(workspace:GetDescendants()) do
            if obj:IsA("Model") and obj.Name:lower():find(name:lower(), 1, true) then
                return obj
            end
        end
    end

    local pad = findPad("[TacticalShotgun]")
    if pad then
        local partToTP = pad:FindFirstChildWhichIsA("BasePart") or pad.PrimaryPart
        if partToTP then
            hrp.CFrame = partToTP.CFrame + Vector3.new(0, 3, 0)
        end
    end
end)

buy:AddButton('Revolver', function()
    local Players = game:GetService("Players")
    local lp = Players.LocalPlayer
    local char = lp.Character or lp.CharacterAdded:Wait()
    local hrp = char:WaitForChild("HumanoidRootPart")

    local function findPad(name)
        for _, obj in pairs(workspace:GetDescendants()) do
            if obj:IsA("Model") and obj.Name:lower():find(name:lower(), 1, true) then
                return obj
            end
        end
    end

    local pad = findPad("[Revolver]")
    if pad then
        local partToTP = pad:FindFirstChildWhichIsA("BasePart") or pad.PrimaryPart
        if partToTP then
            hrp.CFrame = partToTP.CFrame + Vector3.new(0, 3, 0)
        end
    end
end)

buy:AddButton('RPG', function()
    local Players = game:GetService("Players")
    local lp = Players.LocalPlayer
    local char = lp.Character or lp.CharacterAdded:Wait()
    local hrp = char:WaitForChild("HumanoidRootPart")

    local function findPad(name)
        for _, obj in pairs(workspace:GetDescendants()) do
            if obj:IsA("Model") and obj.Name:lower():find(name:lower(), 1, true) then
                return obj
            end
        end
    end

    local pad = findPad("[RPG]")
    if pad then
        local partToTP = pad:FindFirstChildWhichIsA("BasePart") or pad.PrimaryPart
        if partToTP then
            hrp.CFrame = partToTP.CFrame + Vector3.new(0, 3, 0)
        end
    end
end)

buy:AddButton('Pizza', function()
    local Players = game:GetService("Players")
    local lp = Players.LocalPlayer
    local char = lp.Character or lp.CharacterAdded:Wait()
    local hrp = char:WaitForChild("HumanoidRootPart")

    local function findPad(name)
        for _, obj in pairs(workspace:GetDescendants()) do
            if obj:IsA("Model") and obj.Name:lower():find(name:lower(), 1, true) then
                return obj
            end
        end
    end

    local pad = findPad("[Pizza]")
    if pad then
        local partToTP = pad:FindFirstChildWhichIsA("BasePart") or pad.PrimaryPart
        if partToTP then
            hrp.CFrame = partToTP.CFrame + Vector3.new(0, 3, 0)
        end
    end
end)

buy:AddButton('Mask', function()
    local Players = game:GetService("Players")
    local lp = Players.LocalPlayer
    local char = lp.Character or lp.CharacterAdded:Wait()
    local hrp = char:WaitForChild("HumanoidRootPart")

    local function findPad(name)
        for _, obj in pairs(workspace:GetDescendants()) do
            if obj:IsA("Model") and obj.Name:lower():find(name:lower(), 1, true) then
                return obj
            end
        end
    end

    local pad = findPad("[Surgeon Mask]")
    if pad then
        local partToTP = pad:FindFirstChildWhichIsA("BasePart") or pad.PrimaryPart
        if partToTP then
            hrp.CFrame = partToTP.CFrame + Vector3.new(0, 3, 0)
        end
    end
end)

trb:AddToggle("ToggletSP", {
    Text = "Enable Triggerbot",
    Default = getgenv().Triggerbot.Enabled,
    Callback = function(Value)
        getgenv().Triggerbot.Enabled = Value
        library:Notify("Toggled TRB", 2)
    end
})

trb:AddSlider('TriggerbotDelay', {
    Text = 'Triggerbot Delay',
    Min = 0.1,
    Max = 1,
    Default = getgenv().Triggerbot.Delay,
    Rounding = 2,
    Callback = function(value)
        getgenv().Triggerbot.Delay = value
    end
})

trb:AddLabel('Real Dahood')

visual:AddToggle("ToggleESP", {
    Text = "ESP Enabled",
    Default = getgenv().ESPsc.Enabled,
    Callback = function(Value)
        getgenv().ESPsc.Enabled = Value
    end
})

visual:AddToggle("ToggleBox", {
    Text = "Box",
    Default = getgenv().ESPsc.Box.Enabled,
    Callback = function(Value)
        getgenv().ESPsc.Box.Enabled = Value
    end
})

visual:AddToggle("ToggleHealth", {
    Text = "Healthbar",
    Default = getgenv().ESPsc.Healthbar.Enabled,
    Callback = function(Value)
        getgenv().ESPsc.Healthbar.Enabled = Value
    end
})

visual:AddToggle("ToggleName", {
    Text = "Name",
    Default = getgenv().ESPsc.Name.Enabled,
    Callback = function(Value)
        getgenv().ESPsc.Name.Enabled = Value
    end
})

visual:AddToggle("ToggleDistance", {
    Text = "Distance",
    Default = getgenv().ESPsc.Distance.Enabled,
    Callback = function(Value)
        getgenv().ESPsc.Distance.Enabled = Value
    end
})

hj:AddToggle("Togglehj", {
    Text = "Toggle Highjump",
    Default = getgenv().highjump.enabled,
    Callback = function(Value)
        getgenv().highjump.enabled = Value
    end
})

hj:AddInput('hjpower', {
    Text = 'Power',
    Default = getgenv().highjump.power,
    Callback = function(val)
        getgenv().highjump.power = tonumber(val) or 0.120
    end
})

cf:AddToggle('cframe_enabled', {
    Text = 'Enable CFrame',
    Default = cframe.settings.enabled,
    Callback = function(val)
        cframe.settings.enabled = val
        if Button then
            Button.Text = cframe.settings.enabled and "CFrame ON" or "CFrame OFF"
        end
    end
})

cf:AddToggle('cframe_button', {
    Text = 'CFrame Button',
    Default = cframe.settings.showbutton,
    Callback = function(val)
        cframe.settings.showbutton = val
        if val then
            CreateCFrameButton()
        else
            DestroyCFrameButton()
        end
    end
})

cf:AddInput('cframe_speed', {
    Default = cframe.settings.speed,
    Numeric = true,
    Text = 'Speed',
    Callback = function(value)
        cframe.settings.speed = tonumber(value) or 1
    end
})

crosshair_group:AddToggle(
    'uqnabled',
    {
        Text = 'Enabled',
        Default = getgenv().crosshair.enabled,
        Callback = function(value)
            getgenv().crosshair.enabled = value
        end
    }
)

crosshair_group:AddLabel(''):AddColorPicker('jssj', {
    Default = getgenv().crosshair.color,
    Title = 'Crosshair Color',
    Transparency = nil,
    Callback = function(value)
        getgenv().crosshair.color = value
    end
})

crosshair_group:AddDropdown(
    'crosshair_mode',
    {
        Values = {'Center', 'Mouse', 'Custom'},
        Default = 'Center',
        Text = 'Crosshair Mode',
        Callback = function(value)
            getgenv().crosshair.mode = value:lower()
        end
    }
)

fov:AddToggle('fsEnabled', {
    Text = 'Enable FOV',
    Default = getgenv().exlareCircle.enabled,
    Callback = function(value)
        getgenv().exlareCircle.enabled = value
        updateexlareCircle()
    end
})

fov:AddToggle('hdhsjs', {
    Text = 'Filled',
    Default = getgenv().exlareCircle.filled,
    Callback = function(value)
        getgenv().exlareCircle.filled = value
        updateexlareCircle()
    end
})

fov:AddLabel(''):AddColorPicker('fovcolorr', {
    Default = getgenv().exlareCircle.color,
    Title = 'FOV Color',
    Transparency = nil,
    Callback = function(value)
        getgenv().exlareCircle.color = value
    end
})

fov:AddInput('rwdsys', {
    Default = getgenv().exlareCircle.radius,
    Numeric = true,
    Text = 'Radius',
    Callback = function(value)
        getgenv().exlareCircle.radius = tonumber(value) or 100
    end
})

ws:AddToggle("WalkToggle", {
    Text = "Velocity WalkSpeed",
    Default = getgenv().WalkSpeed.Enabled,
    Callback = function(v) getgenv().WalkSpeed.Enabled = v end
})

ws:AddSlider("WalkSlider", {
    Text = "Speed",
    Default = 27, 
    Min = 27,
    Max = 500,
    Rounding = 0,
    Callback = function(v) getgenv().WalkSpeed.Value = v end
})

ws:AddSlider('CharacterFOV', {
    Text = 'Camera FOV',
    Min = 60,       
    Max = 120,      
    Default = workspace.CurrentCamera.FieldOfView,
    Rounding = 0,   
    Callback = function(value)
        workspace.CurrentCamera.FieldOfView = value
    end
})

chm:AddToggle("TogglsyhseName", {
    Text = "Character Chams",
    Default = getgenv().Chams.Character.Enabled,
    Callback = function(Value)
        getgenv().Chams.Character.Enabled = Value
    end
})

chm:AddToggle("gshs", {
    Text = "Tool Chams",
    Default = getgenv().Chams.Tool.Enabled,
    Callback = function(Value)
        getgenv().Chams.Tool.Enabled = Value
    end
})

chm:AddLabel(''):AddColorPicker('hshsjw', {
    Default = getgenv().Chams.Character.Color,
    Title = 'Chams Color',
    Transparency = nil,
    Callback = function(value)
        getgenv().Chams.Character.Color = value
        getgenv().Chams.Tool.Color = value
    end
})

local Materials = { "ForceField", "SmoothPlastic", "Neon" }

chm:AddDropdown("ChamsMaterial", {
    Values = Materials,
    Default = "ForceField",
    Multi = false,
    Text = "Chams Material",
    Callback = function(value)
        local mat = Enum.Material[value]

        getgenv().Chams.Character.Material = mat
        getgenv().Chams.Tool.Material = mat

        local lp = game.Players.LocalPlayer

        if lp.Character then
            for _, part in ipairs(lp.Character:GetDescendants()) do
                if part:IsA("BasePart") then
                    part.Material = mat
                end
            end
        end

        if lp.Character then
            for _, tool in ipairs(lp.Character:GetChildren()) do
                if tool:IsA("Tool") then
                    for _, part in ipairs(tool:GetDescendants()) do
                        if part:IsA("BasePart") then
                            part.Material = mat
                        end
                    end
                end
            end
        end
    end
})

hvh:AddToggle('orbit', {
   Text =  'Enable Orbit',
   Default = getgenv().orbit.enabled,
   Callback = function(value) getgenv().orbit.enabled = value end
})

hvh:AddInput('ortbitz', {
   Text = 'Orbit Speed',
   Default = getgenv().orbit.speed,
   Callback = function(value) getgenv().orbit.speed = tonumber(value) or 400 end
})

hvh:AddInput('orbitz', {
   Text = 'Orbit Height',
   Default = getgenv().orbit.height,
   Callback = function(value) getgenv().orbit.height = tonumber(value) or 5 end
})

hvh:AddInput('oree', {
   Text = 'Orbit Distance',
   Default = getgenv().orbit.distance,
   Callback = function(value) getgenv().orbit.distance = tonumber(value) or 10 end
})

bla:AddToggle('yya', {
    Text = 'Enable Forcehit HC (WIP)',
    Default = getgenv().Arx.ForcehitHC.Enabled,
    Callback = function(Value)
        getgenv().Arx.ForcehitHC.Enabled = Value
    end
})

bla:AddToggle('autoReloadToggle', {
    Text = 'Enable auto reload',
    Default = false,
    Callback = function(state)
        getgenv().AutoReloadEnabled = state
        if state then
            task.spawn(autoReload)
        end
    end
})

bla:AddButton(
    'Auto Shoot',
    function()
        local ScreenGui = Instance.new("ScreenGui")
        ScreenGui.Parent = game.CoreGui

        local button = Instance.new("TextButton")
        button.Size = UDim2.new(0, 80, 0, 60)
        button.Position = UDim2.new(0.5, -100, 0.5, -25)
        button.Text = "Auto Shoot"
        button.BackgroundColor3 = Color3.new(0, 0, 0)
        button.BackgroundTransparency = 0.3
        button.TextColor3 = Color3.new(1, 1, 1)
        button.Font = Enum.Font.Code
        button.TextWrapped = true
        button.TextScaled = true
        button.Parent = ScreenGui
        button.Draggable = true
        button.Active = true
        button.Selectable = true
        
        local Outline = Instance.new("UIStroke")
        Outline.Color = Color3.fromRGB(250, 250, 250)
        Outline.Thickness = 1
        Outline.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
        Outline.Parent = button

        local UICorner = Instance.new("UICorner")
        UICorner.Parent = button

        local autoShooting = false

        local function autoShoot()
            while autoShooting do
                local character = game.Players.LocalPlayer.Character
                if character then
                    local tool = character:FindFirstChildOfClass("Tool")
                    if tool and tool:FindFirstChild("Handle") then
                        tool:Activate()
                    end
                end
                task.wait()
            end
        end

        button.MouseButton1Click:Connect(
            function()
                autoShooting = not autoShooting
                button.Text = autoShooting and "Auto On" or "Auto Off"

                if autoShooting then
                    task.spawn(autoShoot)
                end
            end
        )
    end
)

ag:AddToggle('gsEnabled', {
    Text = 'Enable AntiGroundShots',
    Default = getgenv().GroundShotDetection.Enabled,
    Callback = function(value)
        getgenv().GroundShotDetection.Enabled = value
    end
})

ag:AddInput('gsThreshold', {
    Default = '0.5',
    Numeric = true,
    Finished = true,
    Text = 'Threshold',
    Callback = function(value)
        getgenv().GroundShotDetection.GroundShotThreshold = tonumber(value) or 5
    end
})

ag:AddInput('gsRange', {
    Default = '20',
    Numeric = true,
    Finished = true,
    Text = 'Range',
    Callback = function(value)
        getgenv().GroundShotDetection.DetectionRange = tonumber(value) or 20
    end
})

ant:AddToggle(
    'Toggle antilock',
    {
        Text = 'Enable Anti Lock',
        Default = false,
        Callback = function(state)
            getgenv().antilock.enabled = state
        end
    }
)

ant:AddDropdown(
    'Antilockmode',
    {
        Values = {'Sky', 'Predbreaker'},
        Default = getgenv().antilock.mode,
        Multi = false,
        Text = 'Anti Lock Mode',
        Callback = function(value)
            getgenv().antilock.mode = value
        end
    }
)

hit_group:AddToggle('detection', {
    Text = 'Hit Detection',
    Default = hit.detection,
    Callback = function(value) hit.detection = value end
})

hit_group:AddToggle('logs', {
    Text = 'Hit Logs',
    Default = hit.logs,
    Callback = function(value) hit.logs = value end
})

hit_group:AddToggle('sound_enabled', {
    Text = 'Hit Sound',
    Default = hit.sound_enabled,
    Callback = function(value) hit.sound_enabled = value end
})

hit_group:AddInput('notify_duration', {
    Default = hit.notify_duration,
    Text = 'Notify Duration',
    Numeric = true,
    Finished = true,
    Callback = function(value)
        hit.notify_duration = tonumber(value) or 1
    end
})

hit_group:AddDropdown('sounds', {
    Values = hitSoundsNames,
    Default = hit.sound_id,
    Text = 'Hit Sound',
    Callback = function(value)
        hit.sound_id = value
    end
})

hit_group:AddInput('sound_volume', {
    Default = hit.sound_volume,
    Text = 'Sound Volume',
    Numeric = true,
    Finished = true,
    Callback = function(value)
        hit.sound_volume = tonumber(value) or 1
    end
})

hit_chams:AddToggle('hcEnabled', {
    Text = 'Enable Hit Chams',
    Default = getgenv().HitChams.enabled,
    Callback = function(value)
        getgenv().HitChams.enabled = value
    end
})

hit_chams:AddLabel(''):AddColorPicker('HitChamsColor', {
    Default = getgenv().HitChams.color,
    Title = 'Hit Chams Color',
    Transparency = nil,
    Callback = function(value)
        getgenv().HitChams.color = value
    end
})

hit_chams:AddInput('hcFura', {
    Default = getgenv().HitChams.duration,
    Text = 'Duration',
    Callback = function(value)
        getgenv().HitChams.duration = tonumber(value) or 0.3
    end
})

local toggleButtonLoaded = false

main:AddButton(
    'Toggle Button',
    function()
        if toggleToolLoaded then
            library:Notify("Tool Already Loaded", 3)
            return
        end        
        if toggleButtonLoaded then
            library:Notify("Already Fucking Loaded", 2)
            return
        end
        
        toggleButtonLoaded = true
        
        local ScreenGui = Instance.new("ScreenGui")
        local Frame = Instance.new("Frame")
        local TextButton = Instance.new("ImageButton")
        local UICorner = Instance.new("UICorner")

        local CoreGui = game:GetService("CoreGui")
        ScreenGui.Parent = CoreGui
        ScreenGui.ResetOnSpawn = false
        ScreenGui.Enabled = true

        Frame.Parent = ScreenGui
        Frame.BackgroundTransparency = 1
        Frame.Position = UDim2.new(0.5, 0, 0.5, 0)
        Frame.Size = UDim2.new(0, 90, 0, 90)
        Frame.Active = true

        TextButton.Parent = Frame
        TextButton.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
        TextButton.BackgroundTransparency = 0.5
        TextButton.Size = UDim2.new(0, 75, 0, 75)
        TextButton.AnchorPoint = Vector2.new(0.5, 0.5)
        TextButton.Position = UDim2.new(0.5, 0, 0.5, 0)
        TextButton.Image = "rbxassetid://10747366027"
        TextButton.Active = true

         local Outline = Instance.new("UIStroke")
        Outline.Color = Color3.fromRGB(255, 255, 255)
        Outline.Thickness = 1
        Outline.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
        Outline.Parent = TextButton

        TextButton.InputBegan:Connect(function(input)
            if input.UserInputType == Enum.UserInputType.MouseButton1 or input.UserInputType == Enum.UserInputType.Touch then
                dragging = true
                dragStart = input.Position
                startPos = TextButton.Position

                input.Changed:Connect(function()
                    if input.UserInputState == Enum.UserInputState.End then
                        dragging = false
                    end
                end)
            end
        end)

        TextButton.InputChanged:Connect(function(input)
            if dragging and (input.UserInputType == Enum.UserInputType.MouseMovement or input.UserInputType == Enum.UserInputType.Touch) then
                local delta = input.Position - dragStart
                TextButton.Position = UDim2.new(
                    startPos.X.Scale, startPos.X.Offset + delta.X,
                    startPos.Y.Scale, startPos.Y.Offset + delta.Y
                )
            end
        end)

        UICorner.Parent = TextButton
        UICorner.CornerRadius = UDim.new(0, 12)

        TextButton.MouseButton1Click:Connect(function()
          getgenv().Arx.Camlock.enabled = not getgenv().Arx.Camlock.enabled
    
           if getgenv().Arx.Camlock.enabled then
                local enemy = FindNearestEnemy()
                if enemy then
                    getgenv().Arx.Camlock.target = enemy
                    getgenv().Arx.Targetaim.target = enemy 
                    locking = true
                    TextButton.Image = "rbxassetid://10723434711"
                    library:Notify("Targeting: " .. enemy.DisplayName, 2)
                else
                    getgenv().Arx.Camlock.enabled = false
                    getgenv().Arx.Targetaim.enabled = false
                    TextButton.Image = "rbxassetid://10747366027"
                    locking = false
                    library:Notify("No Target Found", 2)
                end
            else
                getgenv().Arx.Camlock.target = nil
                getgenv().Arx.Targetaim.target = nil
                locking = false
                TextButton.Image = "rbxassetid://10747366027"
                library:Notify("Untargeted", 2)
            end
        end)
    end
)

main:AddToggle('enable', {
    Text = 'Enable TargetAim',
    Default = getgenv().Arx.Targetaim.enabled,
    Callback = function(state)
    getgenv().Arx.Targetaim.enabled = state
    if state and not getgenv().Arx.Targetaim.target then
        local enemy = FindNearestEnemy()
        if enemy then
            getgenv().Arx.Targetaim.target = enemy
        end
    end
end
})

main:AddToggle('enable_cam', {
    Text = 'Enable Camlock',
    Default = getgenv().Arx.Camlock.enabled,
    Callback = function(state)
        getgenv().Arx.Camlock.enabled = state
        if state and not getgenv().Arx.Camlock.target then
            local enemy = FindNearestEnemy()
            if enemy then
                getgenv().Arx.Camlock.target = enemy
            end
        end
    end
})

main:AddToggle('enableone', {
    Text = 'One Method',
    Default = Arx.Targetaim.oneMethod,
    Callback = function(value) Arx.Targetaim.oneMethod = value end
})

main:AddToggle('enabled', {
    Text = 'Auto Air',
    Default = autoair.enabled,
    Callback = function(value) autoair.enabled = value end
})

main:AddToggle('enabhs', {
    Text = 'Look At',
    Default = getgenv().LookAtEnabled,
    Callback = function(value) getgenv().LookAtEnabled = value end
})

main:AddToggle('resol', {
    Text = 'Resolver',
    Default = Arx.Camlock.resolver,
    Callback = function(value) Arx.Camlock.resolver = value end
})

main:AddToggle("AutoPrediction", {
	Text = "Auto Prediction",
	Default = false,
	Callback = function(state)
		if state then
			startAutoPrediction()
		else
			stopAutoPrediction()
		end
	end
})

main:AddToggle("visualize_enemy", {
    Text = "Highlight Enemy",
    Default = getgenv().Arx.Visualize.enabled,
    Callback = function(val)
        getgenv().Arx.Visualize.enabled = val
    end
})

main:AddLabel('Highlight Color'):AddColorPicker('HighlightFill', {
    Default = getgenv().Arx.Visualize.color.Fill,
    Title = 'Highlight Fill Color',
    Transparency = nil,
    Callback = function(value)
        getgenv().Arx.Visualize.color.Fill = value
        getgenv().Arx.Visualize.color.Outline = value
    end
})

main:AddToggle("anti_enemy", {
    Text = "Anti Aimviewer",
    Default = getgenv().AntiAimViewer.enabled,
    Callback = function(val)
        getgenv().AntiAimViewer.enabled = val
    end
})

set:AddDropdown('mrtof', {
    Text = 'Method',
    Values = {'Standard', 'Index', 'Mouse', 'Combo'},
    Default = getgenv().Arx.Targetaim.Method,
    Callback = function(value)
        getgenv().Arx.Targetaim.Method = value
        library:Notify("Lock Mode: "..value, 2)
    end
})

set:AddDropdown(
    'easing_style',
    {
        Values = {'Linear', 'Sine', 'Back', 'Quad', 'Quart', 'Quint', 'Bounce', 'Elastic'},
        Default = 'Sine',
        Text = 'Easing Style',
        Callback = function(value)
            Arx.Easing.style = Enum.EasingStyle[value]
            library:Notify("Easing Style: "..value, 2)
        end
    }
)

set:AddDropdown(
    'easing_direction',
    {
        Values = {'In', 'Out', 'InOut'},
        Default = 'InOut',
        Text = 'Easing Direction',
        Callback = function(value)
            Arx.Easing.direction = Enum.EasingDirection[value]
            library:Notify("Easing Direction: "..value, 2)
        end
    }
)

set:AddDropdown('hitpart', {
    Text = 'Hit Part',
    Values = {'HumanoidRootPart', 'UpperTorso', 'LowerTorso', 'Head'},
    Default = getgenv().Arx.Targetaim.hitpart,
    Callback = function(value)
        getgenv().Arx.Targetaim.hitpart = value
        getgenv().Arx.Camlock.hitpart = value
        library:Notify("Hit Part: "..value, 2)
    end
})

set:AddDropdown('airpart', {
    Text = 'Air Part',
    Values = {'HumanoidRootPart', 'RightFoot', 'LowerTorso', 'Head'},
    Default = getgenv().autoair.AirPart,
    Callback = function(value)
        getgenv().autoair.AirPart = value
        library:Notify("Air Part: "..value, 2)
    end
})

set:AddInput('Prediction', {
    Text = 'Prediction',
    Default = getgenv().Arx.Targetaim.prediction,
    Callback = function(val)
        local num = tonumber(val) or 0.1
        getgenv().Arx.Targetaim.prediction = num
        getgenv().Arx.Camlock.prediction = num
    end
})

set:AddInput('smoothness', {
    Text = 'Smoothness',
    Default = getgenv().Arx.Camlock.smoothness,
    Callback = function(val)
        getgenv().Arx.Camlock.smoothness = tonumber(val) or 0.1
    end
})

set:AddInput('Offset', {
    Default = Arx.Targetaim.jumpOffset,
    Text = 'jump offset',
    Callback = function(value)
        Arx.Targetaim.jumpOffset = tonumber(value) or 0.8 
    end
})

set:AddInput('dly', {
    Default = autoair.delay,
    Text = 'Air Delay',
    Callback = function(value) 
        autoair.delay = tonumber(value) or 0.12 
    end
})

function isframework(scriptInstance)
    if tostring(scriptInstance) == "Framework" then
        return true
    end
    return false
end

function checkArgs(instance,index)
    if tostring(instance):lower():find("camera") and tostring(index) == "CFrame" then
        return true
    end
    return false
end

newindex = hookmetamethod(game, "__newindex", function(self,index,value)
    local callingScr = getcallingscript()

    if isframework(callingScr) and checkArgs(self,index) then
       return;
    end

    return newindex(self,index,value)
end)

local mt = getrawmetatable(game)
local old = mt.__namecall
setreadonly(mt, false)

mt.__namecall =
    newcclosure(
    function(self, ...)
        local args = {...}
        local method = getnamecallmethod()

        if locking and not checkcaller() and method == "FireServer" then
            for i, v in pairs(args) do
                if typeof(v) == "Vector3" or typeof(v) == "CFrame" then
                    remote = self
                    argument = i
                    firesignal_args = args
                end
            end
        end

        return old(self, ...)
    end
)

setreadonly(mt, true)

runservice.RenderStepped:Connect(
    function()
        local _tick = tick()

        if _tick - last_render > crosshair.refreshrate then
            last_render = _tick

            local position =
                (crosshair.mode == "center" and camera.ViewportSize / 2 or
                crosshair.mode == "mouse" and inputservice:GetMouseLocation() or
                crosshair.position)

            local text_1 = drawings.text[1]
            local text_2 = drawings.text[2]

            text_1.Visible = crosshair.enabled
            text_2.Visible = crosshair.enabled

            if crosshair.enabled then
                local text_x = text_1.TextBounds.X + text_2.TextBounds.X

                text_1.Position =
                    position +
                    Vector2.new(
                        -text_x / 2,
                        crosshair.radius + (crosshair.resize and crosshair.resize_max or crosshair.length) + 15
                    )
                text_2.Position = text_1.Position + Vector2.new(text_1.TextBounds.X)
                text_2.Color = crosshair.color

                for idx = 1, 4 do
                    local outline = drawings.crosshair[idx]
                    local inline = drawings.crosshair[idx + 4]

                    local angle = (idx - 1) * 90
                    local length = crosshair.length

                    if crosshair.spin then
                        local spin_angle = -_tick * crosshair.spin_speed % crosshair.spin_max
                        angle =
                            angle +
                            tweenservice:GetValue(spin_angle / 360, crosshair.spin_style, Enum.EasingDirection.InOut) *
                                360
                    end

                    if crosshair.resize then
                        local resize_length = tick() * crosshair.resize_speed % 180
                        length = crosshair.resize_min + math.sin(math.rad(resize_length)) * crosshair.resize_max
                    end

                    inline.Visible = true
                    inline.Color = crosshair.color
                    inline.From = position + solve(angle, crosshair.radius)
                    inline.To = position + solve(angle, crosshair.radius + length)
                    inline.Thickness = crosshair.width

                    outline.Visible = true
                    outline.From = position + solve(angle, crosshair.radius - 1)
                    outline.To = position + solve(angle, crosshair.radius + length + 1)
                    outline.Thickness = crosshair.width + 1.5
                end
            else
                for idx = 1, 4 do
                    drawings.crosshair[idx].Visible = false
                    drawings.crosshair[idx + 4].Visible = false
                end
            end
        end
    end
)

local mt = getrawmetatable(game)
setreadonly(mt, false)

local old = mt.__namecall

mt.__namecall = newcclosure(function(self, ...)
    if getnamecallmethod() == "Kick" then
        return nil
    end
    return old(self, ...)
end)

setreadonly(mt, true)

setup_hooks()
localplayer.CharacterAdded:Connect(handle_character_added)
if localplayer.Character then
    handle_character_added(localplayer.Character)
end

if game.PlaceId == 9825515356 then
    local OriginalNameCall; OriginalNameCall = hookmetamethod(Game, "__namecall", function(Object, ...)
    local Arguments = {...}
    local NameCallMethod = getnamecallmethod()
    local CallingFromExecutor = checkcaller()
    
    if not CallingFromExecutor and NameCallMethod == "FireServer" and #Arguments > 0 and Arguments[1] == "IS_MOBILE" then
        return
    end
    
    return OriginalNameCall(Object, ...)
end)
end


-- groupbox trong tab Config
local MenuGroup = tabs.config:AddRightGroupbox("Menu")

MenuGroup:AddButton("Unload", function()
	Library:Unload()
end)

MenuGroup:AddLabel("Menu bind"):AddKeyPicker("MenuKeybind", {
	Default = "End",
	NoUI = true,
	Text = "Menu keybind"
})

library.ToggleKeybind = Options.MenuKeybind

-- gáº¯n Library vÃ o ThemeManager & SaveManager
themeManager:SetLibrary(Library)
saveManager:SetLibrary(Library)

-- bá» qua máº¥y setting khÃ´ng cáº§n lÆ°u
saveManager:IgnoreThemeSettings()
saveManager:SetIgnoreIndexes({ "MenuKeybind" })

-- táº¡o folder náº¿u chÆ°a cÃ³
if not isfolder("arex") then
	makefolder("arex")
end
if not isfolder("arex/configs") then
	makefolder("arex/configs")
end

-- set folder
themeManager:SetFolder("arex")
saveManager:SetFolder("arex/configs")

-- build + apply vÃ o tab Config
saveManager:BuildConfigSection(tabs.config)
themeManager:ApplyToTab(tabs.config)

-- load config tá»± Ä‘á»™ng
saveManager:LoadAutoloadConfig()



game.StarterGui:SetCore("SendNotification", {
    Title = "Arex.cc [KHEN]",
    Text = "Successfully loaded",
    Duration = 2
}) 
